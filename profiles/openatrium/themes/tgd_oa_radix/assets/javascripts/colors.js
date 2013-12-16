
jQuery(function(){
    
    var target = null;
    var target = jQuery("#oa_breadcrumb li.oa-breadcrumb:nth-child(2) a:first-child")
            .html()
            .toLowerCase();

    if (target =="spaces" || target=="areas"){
        
        jQuery("#oa-navbar .panel-panel .pane-oa-navigation").addClass("default-space-colorizer").css("border-top", "none");
        jQuery("body #footer").addClass("default-space-colorizer").css("border-bottom", "none");                
    }else{
        jQuery("#oa-navbar .panel-panel .pane-oa-navigation").addClass(target + "-space-colorizer").css("border-top", "none");
        jQuery("body #footer").addClass(target + "-space-colorizer").css("border-bottom", "none");
    }
    
});
