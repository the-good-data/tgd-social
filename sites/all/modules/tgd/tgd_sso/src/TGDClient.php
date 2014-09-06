<?php

/**
 * Definition of \Drupal\tgd_sso\TGDClient
 */

namespace Drupal\tgd_sso;

// Use some classes from http_client module.
use \HttpClient;

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
  protected $baseURL;

  /**
   * Authentication token.
   *
   * @var string
   */
  protected $authToken;

  /**
   * Constructor.
   */
  function __construct($baseURL, $authToken, $httpClient) {
    $this->httpClient = $httpClient;
    $this->baseUrl = $baseUrl;
    $this->authToken = $authToken;
  }

  /**
   * Get TGD User by id.
   */
  public function getUserById($id) {
    // @TODO
  }

  /**
   * Get TGD User by session token
   */
  public function getUserByToken($token) {
    list($uid, $timestamp) = $this->checkLogin($token);
    if ($uid) {
      // One more API call to get user data.
      return $this->getUserById($id);
    }
    else {
      return NULL;
    }
  }

  /**
   * Get TGD user id + timestamp by session token.
   */
  public function checkLogin($token) {

  }

  /**
   * Executes a GET request.
   */
  public function get($path, $parameters = array()) {
    $url = $this->getUrl($path);
    // Add authentication.
    $parameters['auth'] = $this->authToken;
    return $this->httpClient->Get($url, $parameters);
  }

  /**
   * Gets endpoint URL.
   *
   * @return string
   *   Full URL
   */
  public function getUrl($path) {
    return $this->baseUrl . '/' . $path;
  }
}