/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery(function(){
    
    var target = null;
    var target = jQuery("#oa_breadcrumb li.oa-breadcrumb:nth-child(2) a:first-child")
            .html()
            .toLowerCase();

    if (target =="spaces"){
        
        jQuery("#oa-navbar .panel-panel .pane-oa-navigation").addClass("default-space-colorizer").css("border-top", "none");
        jQuery("body #footer").addClass("default-space-colorizer").css("border-bottom", "none");                
    }else{
        jQuery("#oa-navbar .panel-panel .pane-oa-navigation").addClass(target + "-space-colorizer").css("border-top", "none");
        jQuery("body #footer").addClass(target + "-space-colorizer").css("border-bottom", "none");
    }
    
    // change logo
    var logo = jQuery('<img src="http://manage.thegooddata.org/profiles/openatrium/themes/tgd_oa_radix/assets/images/logo.png"/>');
    
    jQuery(".oa-menu-banner img.oa-site-banner-img").attr({"width":"0px", "height": "0px"}).after(logo);
});
