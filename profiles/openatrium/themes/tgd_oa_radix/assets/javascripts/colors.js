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

    if (target!==""){
        jQuery("#oa-navbar .panel-panel .pane-oa-navigation").addClass(target + "-space-colorizer").css("border-top", "none");
        jQuery("body #footer").addClass(target + "-space-colorizer").css("border-bottom", "none");
    }
});