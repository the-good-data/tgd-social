<?php

/**
 * @file
 *  TGD Drive module theme functions.
 */

/**
 * Theme the list of google drive documents links.
 */
function theme_tgd_drive_doc_list($vars) {
  $links = array();
  foreach ($vars['links'] as $drive_file) {
    $link = theme('tgd_drive_doc_link', array('Google_DriveFile' => $drive_file));
    $delete_link = array(
      '#type' => 'link',
      '#title' => t('(delete file)'),
      '#href' => 'node/' . $vars['gid'] . '/delete-drive-file/' . $drive_file->id,
      '#access' => $vars['delete_access'],
    );
    if ($vars['delete_access']) {
      $link .= ' - ' . drupal_render($delete_link);
    }
    $links[] = $link;
  }
  return theme('item_list', array('items' => $links, 'attributes' => array('class' => 'og-drive-doc-list')));
}

/**
 * Theme an individual document link item.
 */
function theme_tgd_drive_doc_link($vars) {
  $drive_file = $vars['Google_DriveFile'];
  // Get icon from mime type.
  $drive_file->filemime = $drive_file->mimeType;
  $icon = theme('file_icon', array('file' => $drive_file));
  $url = $drive_file->alternateLink;
  return $icon . ' ' . l($drive_file->title, $url, array('attributes' => array('class' => 'og-drive-doc-link')));
}