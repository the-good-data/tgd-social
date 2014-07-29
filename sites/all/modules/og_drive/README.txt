1 - INTEGRATE GOOGLE DRIVE WITH ORGANIC GROUPS.

This module lets you associate a Google account with an organic group in such a way that members of the group
can access the documents on the Google account drive.

The module uses the Google APIs Client Library for PHP.

------------------------------------------------------------------------------------------------------------
2 - INSTALLATION

This module requires Organic groups (https://drupal.org/project/OG) and assumes that you have already
installed and configured your groups.

Download the Google api php client into this module's directory, so that the google-api-php-client directory
sits at the same level as the .module file. 
Information on how to obtain the library can be found here:
http://code.google.com/p/google-api-php-client/

------------------------------------------------------------------------------------------------------------
3 - PERMISSIONS AND SETUP

3.1 - Assign "Administer group drive settings" permission to the roles who will be allowed to associate
  all og group nodes with Google drive accounts.  This permission combined with "Administer users" also
  lets administrators associate a Google account email address with any Drupal user, from the user's page.
  Drive setting management can also be granted on a per group basis through the OG permissions for specific 
  OG roles.

  Users with the "Administer group drive settings" permission (or the OG equivalent) will see a 
  "Og drive settings" tab when viewing and editing group nodes.  
  Create a group node, visit the tab and take note of the form fields.

  In the following steps, you will create a Google drive app and associate it with your organic group through
  this form.

------------------------------------------------------------------------------------------------------------
4 - ASSOCIATE A GROUP TO A GOOGLE ACCOUNT

4.1 - Create a Google account in which to store drive documents and make them accessible to a group.
  If you want to allow access to an existing account's drive, log into that account and go to step 2.

  Go to Google.com (sign out if you need to).  Click "Sign Up" to create a new Google account.
  Consider providing an alternate email address to make it possible to restore the password for this
  account in the future.  Keep note of the credentials.

4.2 - Create a project for your account.
  Once logged in to the new account, go to https://code.google.com/apis/console/ and click
  on "Create project".  It is recommended that you name your project in a way that will clearly 
  associate it with the Organic Group.

4.3 - Enable the Drive API and Drive SDK.
  Under the services tab, find the "Drive SDK" and toggle it to the "on" position.
  Also set the "Drive API" toggle to the on position.

4.4 - Enable the OAuth authorization.
  4.4.1 - Under the API Access tab, click on "Create an OAuth 2.0 clien ID".

  4.4.2 - Choose a product name, and optional product logo and home page url, as desired. Click next.

  4.4.3 - In the Client ID Settings, for Application type choose "Web application".

  4.4.4 - Click on "(more options)" next to "Your site or hostname" to expand the form.

  4.4.5 - For Authorized Redirect URIs, write the following.  
        Replace YOUR_DOMAIN_NAME by your actual domain name, where Drupal is installed.
        http://YOUR_DOMAIN_NAME/og_drive/endpoint

  4.4.6 - In Authorized JavaScript Origins write:
        http://YOUR_DOMAIN_NAME

  4.4.7 - Click on Create client ID.

4.5 - Associate the web applications identifiers with your organic group. 
  If desired, make note or save the information under "Clien ID for web applications" in some way.  
  Visit your group node page and under the "Og drive settings" tab, copy the "Client ID" and 
  the "Client secret" into the form.
  For your convenience, you can store the email|gmail address associated with this group.
  Hit submit.  

4.6 -  Authorize Google drive access.
  The settings page will now offer you to authorize the module to communicate with the Drive API
  on behalf of the application accouunt.  Click on "Authorization link".
  On the Google page where this takes you, click on "Accept".

The authorization process is complete and your group members should now have access to the Google drive
documents, as long as they have the "Access group drive" permission.  This is a group specific permission.
Find out more about OG permissions here: https://drupal.org/node/2014937.
The documents are available from the "Og drive content" tab. 
 
-----------------------------------------------------------------------------------------------------------
5 - USAGE

5.1 - Idealy, only use the og drive group content page to create, upload and delete drive files.
  The permissions on Google drive files are managed by the module.  The module needs to know when a file
  is added to the drive so it can update the permissions for all group members.  If a file is directly
  added to or removed from the drive from the Google account interface or in any other way other than 
  through the module, the local file data can still be synchronized from the drive content page by an 
  administrator.

5.2 - Idealy, use one Google drive account with one organic group. 
  Because the file permissions (roles in Google API parlance) are managed by the Drupal module, it is simpler 
  to only associate a Google drive account with a single organic group.  Otherwise the file permissions will
  potentially become confused (if for example a user is a member of two groups with different permissions,
  one write and one read only, but both linked to the same Google drive account).

5.3 - All file sharing is assumed to be managed by the module. 
  All file permissions are assumed to be handled through the organic group membership.  When membership
  is revoked, the permissions to the drive file are removed.  When a group node is deleted, all the permissions
  for all the users are also deleted - none of the previous group members will have access to the drive files
  that were shared by the module.  The file permissions are also revoked when a user is deleted, canceled or
  blocked. 

5.4 - Deleting a group node removes drive files permission.
  Deleting a group node also deletes all drive file permissions, making any files shared through this
  module unaccessible for the users that gained access to those files through group membership.
  It does not delete the files on the drive.

5.5 - Deleting, canceling or blocking a user account removes drive file permission.
  Unblocking a user account restores the drive file permissions.

5.6 - Permissions for administrating drive settings, accessing drive content, creating, uploading files to 
  the drive and deleting files from the drive are managed through the organic group permissions for the group.
  You can find for information on managing Organic Groups permissions here: https://drupal.org/node/2014937.

-----------------------------------------------------------------------------------------------------------
6 - DISABLE OR RESET THE DRIVE FOR A GROUP

If for some reason you want to remove the Google drive application from an organic group, you have two
options.

6.1 - For a temporary solution, uncheck the "enabled" checkbox.  This will simply hide the og drive
  content tab.  The documents will *not* be unshared from each member's drive account and will still be
  accessible to them.

6.2 - For a permanent solution, click on the "Delete group drive settings" link.  This will delete all the
  credentials and access tokens from the Drupal databases.
  This will also remove any existing permissions to all files in the Google drive for all the group members.
  The files themselves will *not* be deleted from the drive.
  After that, you should also remove the app from the Google account.  Log into the Google account 
  previously associated with the group and find the "Manage apps" link in the list of settings option 
  (under the gear icon).  Find the app associated with the group and in the options,
  select "Disconnect from drive".

----------------------------------------------------------------------------------------------------------
7 - EXTERNAL RESOURCES

Google Drive SDK: https://developers.google.com/drive/practices

Manage your apps here: https://code.google.com/apis/console
or here: https://cloud.google.com/console#/project

I hope you enjoy this module!
OG Drive module by Jean-Michel Lavarenne (Jupiter)
On drupal.org: https://drupal.org/user/139327
Sponsored by foodsecurecanada.org
