
<nav class="navbar fixed-top navbar-expand-lg navbar-dark">
  <a class="navbar-brand" href="home-page.html">Girls in STEM</a>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNavDropdown" aria-controls="navbarNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>
  <div class="expand navbar-expand container" id="navbarNavDropdown"> 
    <!-- <div class="collapse navbar-collapse" id="navbarNavDropdown">  -->
      <ul class="navbar-nav">
        <li class="nav-item active">
          <a class="nav-link" href="home-page.html">Home <span class="sr-only">(current)</span></a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="Why-STEM.html">Why STEM?</a>
        </li>
        <!-- Key Figures -->  
        <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLinkKeyFigures" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
            Key Figures
          </a>
          <div class="dropdown-menu" aria-labelledby="navbarDropdownMenuLinkKeyFigures">
            <a class="dropdown-item" href="SarahAdler.html">Sarah Adler</a>
            <a class="dropdown-item" href="#">Other Name</a>
            <a class="dropdown-item" href="#">John Doe</a>
          </div>
        </li>
        <!-- Jobs -->  
        <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLinkJobs" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
            Jobs
          </a>
          <ul class="dropdown-menu" aria-labelledby="navbarDropdownMenuLinkJobs">
            <!-- Engineering Careers -->  
            <!-- <li class="dropdown-item" aria-labelledby="navbarDropdownMenuLink"> -->
              <li class="dropdown-item">
                <a class="nav-link dropdown-toggle color-black" href="#" id="navbarDropdownMenuLinkEngJobs" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                Engineering</a>
                <ul class="dropdown-menu" aria-labelledby="navbarDropdownMenuLinkEngJobs">
                  <li><a class="dropdown-item" href="#">Aerospace Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Chemical Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Civil Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Computer Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Industrial Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Manufacturing Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Mechanical Engineering</a></li>
                </ul>
              </li>
              <!-- Technology --> 
              <li class="dropdown-item">
                <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLinkTechJobs" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                Technology</a>
                <ul class="dropdown-menu" aria-labelledby="navbarDropdownMenuLinkTechJobs">
                  <li><a class="dropdown-item" href="#">Computer Scientist</a></li>
                  <li><a class="dropdown-item" href="#">Information Security</a></li>
                  <li><a class="dropdown-item" href="#">Software Engineering</a></li>
                  <li><a class="dropdown-item" href="#">Web Developer</a></li>
                </ul>
              </li>
            </ul> 
          </li>
          <!-- How to Get Involved -->  
          <li class="nav-item dropdown">
            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdownMenuLinkHowtoGetInvolved" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
              How to Get Invovled
            </a>
            <div class="dropdown-menu" aria-labelledby="navbarDropdownMenuLinkHowtoGetInvolved">
              <a class="dropdown-item" href="#">Challenges</a>
              <a class="dropdown-item" href="#">Useful Links</a>
              <a class="dropdown-item" href="#">Programs & Organizations</a>
            </div>
          </li>
        </li>
      </ul> 
    </div>
  </nav>  
<!--
  <script>
    $('.dropdown-menu a.dropdown-toggle').on('click', function(e) {
      if (!$(this).next().hasClass('show')) {
        $(this).parents('.dropdown-menu').first().find('.show').removeClass("show");
      }
      var $subMenu = $(this).next(".dropdown-menu");
      $subMenu.toggleClass('show');


      $(this).parents('li.nav-item.dropdown.show').on('hidden.bs.dropdown', function(e) {
        $('.dropdown-submenu .show').removeClass("show");
      });


      return false;
    });
  </script>

