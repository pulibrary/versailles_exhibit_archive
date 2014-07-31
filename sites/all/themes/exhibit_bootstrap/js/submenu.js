(function ($) {
  $(document).ready(function() {
   
   $( '<button type="button" class="btn btn-default btn-lg active menu-button">Exhibition Menu <span class="glyphicon glyphicon-align-justify"></span></button>' ).prependTo( '.pane-menu-menu-exhibit-top-level-case-menu' );
   
   if (document.body.clientWidth < 768) {
        
        $( "h2.pane-title" ).hide();
        $( ".menu-button" ).show();
        $( ".menu" ).hide();
    }
   
    if (document.body.clientWidth > 768) {
        $( ".menu-button" ).hide();
        $( "h2.pane-title" ).show();
        $( ".menu" ).show();
    }
   
    var small = window.matchMedia("(max-width:768px)");
    var large = window.matchMedia("(min-width:769px)");
    
    
    small.addListener(function(e){
        if(e.matches){
            $( "h2.pane-title" ).hide();
            $( ".menu-button" ).show();
            $( ".menu" ).hide();
        }
    });
    
    large.addListener(function(e){
        if(e.matches){
            $( ".menu-button" ).hide();
            $( "h2.pane-title" ).show();
            $( ".menu" ).show();
        }
    });
    

    $( ".menu-button" ).on( "click", function() {

        $( ".menu" ).slideToggle( "slow", function() {
          // Animation complete.
        });
     });
    
  });
}(jQuery));
