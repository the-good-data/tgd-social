<?php

/**
 * Definition of \Drupal\tgd_sso\TGDUser
 */

namespace Drupal\tgd_sso;

/**
 * Encapsulate TGD SSO User
 */
class TGDUser {

  /**
   * Remote user data, id, etc...
   * @todo Add proper docs
   */
  public $id;
  public $username;
  public $email;
  public $updated;
  public $status;

  /**
   * Whether remote user is fully loaded.
   * @var unknown_type
   */
  protected $loaded;

  /**
   * Http client that produced this user.
   *
   * @var $tgdClient;
   */
  protected $tgdClient;

  /**
   * Construct from values..
   */
  public function __construct($values, $tgdClient) {
    $this->setValues($values);
    $this->tgdClient = $tgdClient;
  }

  /**
   * Set data values from object or array.
   */
  public function setValues($values) {
    foreach ((array)$data as $name => $value) {
      $this->$name = $value;
    }
  }

  /**
   * Full load from master.
   *
   * @return boolean
   *   True if success.
   */
  public function load() {
    if (!isset($this->loaded)) {
      $tgdUser = $this->tgdClient->getUserById($this->id);
      if ($tgdUser) {
        $this->setValues($tgdUser);
        $this->loaded = TRUE;
      }
      else {
        // Mark as error, do not retry.
        $this->loaded = FALSE;
      }
    }
    return $this->loaded;
  }
}
