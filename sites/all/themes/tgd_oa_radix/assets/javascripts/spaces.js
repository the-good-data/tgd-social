/**
 * 
 */
 jQuery(document).ready(function(){
    resizePanes();
    setBodyPaddingTop()
 });

 function resizePanes(){
    var panesColumn1 = jQuery('[class*="column1"] .panel-pane'),
        panesColumn2 = jQuery('[class*="column2"] .panel-pane'),
        firstRowHeight = Math.max(panesColumn1.eq(0).height(), panesColumn2.eq(0).height()),
        secondRowHeight = Math.max(panesColumn1.eq(1).height(), panesColumn2.eq(1).height());

    panesColumn1.eq(0).height(firstRowHeight);
    panesColumn2.eq(0).height(firstRowHeight);

    panesColumn1.eq(1).height(secondRowHeight);
    panesColumn2.eq(1).height(secondRowHeight);
 }

 function setBodyPaddingTop() {
    var navBarHeight = jQuery('#oa-navbar').height();
    jQuery('body').css('padding-top', navBarHeight);
 }