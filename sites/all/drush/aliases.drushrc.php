<?php
/**
 * @file
 * Drush aliases for TGD sites
 */

$aliases['tgd-staging'] = array(
  'uri' => 'collaborate-pre.thegooddata.org',
  'root' => '/srv/openatrium/current/',
  'remote-host' => 'lnd-app00-pre.thegooddata.org',
  'remote-user' => 'tgd',
  'ssh-options' => '-p 21950',
);

$aliases['tgd-production'] = array(
  'uri' => 'collaborate.thegooddata.org',
  'root' => '/srv/openatrium/current/',
  'remote-host' => 'lnd-app00.thegooddata.org',
  'remote-user' => 'tgd',
  'ssh-options' => '-p 21950',
);
