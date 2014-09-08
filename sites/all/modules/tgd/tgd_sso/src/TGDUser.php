<?php

/**
 * Definition of \Drupal\tgd_sso\TGDUser
 */

namespace Drupal\tgd_sso;

/**
 * Encapsulate TGD SSO User
 */
class TGDUser {

  // Normal status when user registers (cannot login)
  const STATUS_APPLIED = -1;
  const STATUS_EXPELLED = -2; // cannot login
  const STATUS_DENIED = -3; // cannot login
  const STATUS_LEFT = -4; // cannot login
  // when admin manually marks user as pre-accepted (CAN LOGIN)
  const STATUS_PRE_ACCEPTED = 1;
  // when user has got his share and it is automatically marked as accepted (CAN LOGIN)
  const STATUS_ACCEPTED = 2;

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
  public function __construct($values, $tgdClient = NULL) {
    $this->setValues($values);
    $this->tgdClient = $tgdClient;
  }

  /**
   * Check whether user can log in, depending on status
   */
  public function canLogin() {
    return $this->status == static::STATUS_PRE_ACCEPTED || $this->status == static::STATUS_ACCEPTED;
  }

  /**
   * Get user label: name (id)
   */
  public function getLabel() {
    return "$this->username ($this->id)";
  }

  /**
   * Set data values from object or array.
   */
  public function setValues($data) {
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
      if (isset($this->tgdClient) && ($tgdUser = $this->tgdClient->getUserById($this->id))) {
        foreach (array('username', 'email', 'status', 'updated') as $field) {
          $this->$field = $tgdUser->$field;
        }
        $this->loaded = TRUE;
      }
      else {
        // Mark as error, do not retry.
        $this->loaded = FALSE;
      }
    }
    return $this->loaded;
  }

  /**
   * Magic toString for debugging purposes.
   */
  public function __toString() {
    return implode(', ', array(
      'id=' . (int)$this->id,
      'name=' . check_plain($this->username),
      'mail=' . check_plain($this->email),
      'status=' . (int) $this->status,
      'updated=' . format_date($this->updated, 'short'),
    ));
  }
}
