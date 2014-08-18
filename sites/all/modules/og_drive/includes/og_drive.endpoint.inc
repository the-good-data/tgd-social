<?php

/**
 * @file
 * Menu callback for the API access redirect URI.
 */

/**
 * Receive and store authorization code from Google.
 * Break down the query string into a key value pair array.
 * The state parameter contains the gid for the group being acted on.
 * Obtain and store credentials (access token and refresh token) from Google.
 */
function og_drive_endpoint() {
  // Get the state and code params from the query string.
  $data = $_GET;

  // Get credentials for the group id represented by the state parameter.
  try {
    // Test that the query parameters are present.
    if (! $data['state'] || ! $data['code']) {
      $t_params = array('@state' => $data['state'], '@code' => $data['code']);
      throw(new Exception(t('Missing parameters : state = @state, code = @code', $t_params)));
    }
    // Test that the state parameters corresponds to a valid node.
    if (! is_numeric($data['state']) && ! node_load($data['state'])) {
      $t_params = array('@state' => $data['state']);
      throw(new Exception(t('State parameter is not a valid nid : state = @state', $t_params)));
    }
    $client = new OgDriveClient($data['state']);
    $credentials = $client->authenticate($data['code']);
    $credentials->code = $data['code'];
    // Save the parameters.
    $client->getCredManager()->saveCredentials($credentials);
    drupal_set_message(t('This group has been connected to the Google drive account.  Documents will now be shared with members.'));
  }
  catch (Exception $e) {
    $error_vars = array('!gid' => $data['state'], '!message' => $e->getMessage());
    watchdog('og_drive', 'Error authenticating the app for !gid : !message ', $error_vars, WATCHDOG_ERROR);
    drupal_set_message(t('There was a problem authenticating the app.  Look at the Drupal error logs for more information.'));
  }
  drupal_goto('node/' . $data['state'] . '/og_drive_settings');
}
