<?php

/**
 * Definition of \Drupal\tgd_sso\TGDClient
 */

namespace Drupal\tgd_sso;

// Use some classes from http_client module.
use \HttpClient;
use \HttpClientException;

/**
 * Client to conntect to TGD Webapp
 */
class TGDClient {

  /**
   * HTTP Client
   *
   * @var \HttpClient
   */
  protected $httpClient;

  /**
   * Endpoint base URL, with protocol, but without trailing slash
   *
   * @var string
   */
  protected $baseUrl;

  /**
   * Authentication token.
   *
   * @var string
   */
  protected $authToken;

  /**
   * Logging facility.
   */
  protected $logger;

  /**
   * Constructor.
   */
  function __construct($baseUrl, $authToken, $httpClient, $logger = NULL) {
    $this->httpClient = $httpClient;
    $this->baseUrl = $baseUrl;
    $this->authToken = $authToken;
    $this->logger = $logger;
  }

  /**
   * Get TGD User by session token
   *
   * @return TGDUser|NULL
   */
  public function getUserByToken($token) {
    if ($result = $this->getLoggedUserBySessionId($token)) {
      return new TGDUser($result, $this);
    }
    else {
      return NULL;
    }
  }

  /**
   * Get TGD User by id.
   *
   * @return TGDUser|NULL
   */
  public function getUserById($user_id) {
    if ($result = $this->getUserInfoById($user_id)) {
      $this->logDebug('Got user data', $result);
      return new TGDUser($result, $this);
    }
    else {
      return NULL;
    }
  }

  /**
   * TGD API: Get TGD User by user id.
   *
   * @return array
   *   Full user information if found (id, username, email, status, updated)
   *   Empty array if not found.
   */
  protected function getUserInfoById($user_id) {
    return $this->get('getUserInfoById', array('user_id' => $user_id));
  }

  /**
   * TGD API: Get user id + timestamp by session token.
   *
   * @return array
   *   User data containing tgd user.
   *   Empty array if not found.
   */
  protected function getLoggedUserBySessionId($session_id) {
    return $this->get('getLoggedUserBySessionId', array('session_id' => $session_id));
  }

  /**
   * Executes a GET request.
   */
  public function get($path, $parameters = array()) {
    $url = $this->getUrl($path);
    // Add authentication token.
    $parameters['token'] = $this->authToken;
    try {
      $this->logDebug('Request ' . $url, $parameters);
      $response = $this->httpClient->Get($url, $parameters);
      $this->logDebug('Got response', $response);
      if ($response) {
        return json_decode($response, TRUE);
      }
      else {
        // Empty response, return empty array.
        return array();
      }

    }
    catch (HttpClientException $e) {
      // @TODO Better handle this exception:
      // - Endpoint not reachable.
      // - Request error.
      if (isset($this->logger)) {
        $this->logger->logException($e);
        return NULL;
      }
    }
  }

  /**
   * Gets endpoint URL.
   *
   * @return string
   *   Full URL
   */
  public function getUrl($method) {
    return $this->baseUrl . '/oaApi/' . $method;
  }

  /**
   * Log / print debug information.
   *
   * @TODO Properly handle debug levels.
   */
  protected function logError($message, $args = NULL) {
    if (isset($this->logger)) {
      $this->logger->logError(__CLASS__ . ': ' . $message, $args);
    }
  }

  /**
   * Log / print debug information.
   *
   * @TODO Properly handle debug levels.
   */
  protected function logDebug($message, $args = NULL) {
    if (isset($this->logger)) {
      $this->logger->logDebug(__CLASS__ . ': ' . $message, $args);
    }
  }
}