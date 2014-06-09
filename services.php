<?php
$host = 'https://collaborate.thegooddata.org';
$adminLogin = 'tgdAdmin';
$adminPassword = 'tGdOA2346';
$userName = 'foo';
$userPassword ='foo';
$userEmail = 'foo@bar.com';
$userScreenName = 'Foo';


/*
* Server REST - user.login
*/
// REST Server URL
$request_url = $host.'/rest/user/login';

// User data
$user_data = array(
  'username' => /*admin login*/$adminLogin,
  'password' => /*admin password*/$adminPassword,
);
$user_data = json_encode($user_data);
// cURL
$curl = curl_init();
curl_setopt($curl, CURLOPT_URL, $request_url);
curl_setopt($curl, CURLOPT_HTTPHEADER, array('Accept: application/json', "Content-type: application/json"));
curl_setopt($curl, CURLOPT_POST, 1); // Do a regular HTTP POST
curl_setopt($curl, CURLOPT_POSTFIELDS, $user_data); // Set POST data
curl_setopt($curl, CURLOPT_HEADER, FALSE);  // Ask to not return Header
curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
curl_setopt($curl, CURLOPT_FAILONERROR, TRUE);
$response = curl_exec($curl);
$http_code = curl_getinfo($curl, CURLINFO_HTTP_CODE);
// Check if login was successful
if ($http_code == 200) {
  // Convert json response as array
  $logged_user = json_decode($response);
}
else {
  // Get error msg
  $http_message = curl_error($curl);
  die($http_message);
}
// Define cookie session
$cookie_session = $logged_user->session_name . '=' . $logged_user->sessid;
//GET CSRF TOKEN
$csrf_token = $logged_user->token;
/*
* Server REST - user.create
*/
// REST Server URL
$request_url = $host.'/rest/user/register';
// User data
$user_data = array(
  'name' => /*user name*/ $userName,
  'mail' => /*email*/ $userEmail,
  'pass' => /*password*/ $userPassword,
  'status' => 1,
  'field_user_display_name' => array(
    'und' => array (
        0 => array (
            'value' => /*screen name*/ $userScreenName,
            'format' => NULL,
            'safe_value' => /*screen name*/ $userScreenName,
        ),
    ),
  ),
);

$user_data = json_encode($user_data);

// cURL
$curl = curl_init();
curl_setopt($curl, CURLOPT_URL, $request_url);
curl_setopt($curl, CURLOPT_POST, TRUE); // Do a regular HTTP POST
curl_setopt($curl, CURLOPT_HTTPHEADER, array('Accept: application/json', "Content-type: application/json", 'X-CSRF-Token: '.$csrf_token));
curl_setopt($curl, CURLOPT_POSTFIELDS, $user_data); // Set POST data
curl_setopt($curl, CURLOPT_HEADER, TRUE);  // Ask to not return Header
curl_setopt($curl, CURLOPT_COOKIE, "$cookie_session"); // use the previously saved session
curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
curl_setopt($curl, CURLOPT_FAILONERROR, FALSE); //True in prod, false for debugging
$response = curl_exec($curl);
$http_code = curl_getinfo($curl, CURLINFO_HTTP_CODE);
// Check if login was successful
if ($http_code == 200) {
  // Convert json response as array
  $user = json_decode($response);
  echo $user;
}
else {
  // Get error msg
  $http_message = curl_error($curl);
  die($http_message);
}
  
