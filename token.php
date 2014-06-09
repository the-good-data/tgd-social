<?php
//$host = 'http://collaborate.thegooddata.org';
$host = 'http://openatrium';
$adminLogin = 'tgdAdmin';
$adminPassword = 'tGdOA2346';
$userName = 'foo';
$userPassword ='foo';
$userEmail = 'foo@bar.com';
$userScreenName = 'Foo';

/**
* Create a token for non-safe REST calls.
**/
function mymodule_get_csrf_header($host) {
 $curl_get = curl_init();
 curl_setopt_array($curl_get, array(
   CURLOPT_RETURNTRANSFER => 1,
   CURLOPT_URL => $host.'/services/session/token',
 ));
 $csrf_token = curl_exec($curl_get);
 curl_close($curl_get);
 return 'X-CSRF-Token: ' . $csrf_token;
}

echo mymodule_get_csrf_header($host);