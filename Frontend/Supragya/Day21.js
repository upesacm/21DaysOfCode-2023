document.addEventListener("DOMContentLoaded", function() {
    const button = document.getElementById("colorChangeButton");
    const sections = document.querySelectorAll("section");
    const scrollTopButton = document.getElementById("scrollTopButton");
  
    // Smooth scrolling to sections
    const navLinks = document.querySelectorAll("nav ul li a");
    navLinks.forEach(link => {
      link.addEventListener("click", (event) => {
        event.preventDefault();
        const targetSection = document.querySelector(link.getAttribute("href"));
        targetSection.scrollIntoView({ behavior: "smooth" });
      });
    });
  
    // Show/hide the floating button based on scroll position
    window.addEventListener("scroll", () => {
      if (window.scrollY > 300) {
        scrollTopButton.style.display = "block";
      } else {
        scrollTopButton.style.display = "none";
      }
    });
  
    // Scroll to top when the floating button is clicked
    scrollTopButton.addEventListener("click", () => {
      window.scrollTo({ top: 0, behavior: "smooth" });
    });
  
    // Function to change colors dynamically for each section
    function changeColors() {
        // Generate random RGB values for each section
        const randomColor = () => Math.floor(Math.random() * 256);
        const r = randomColor();
        const g = randomColor();
        const b = randomColor();
  
        // Set custom properties for colors
        pricingTable.style.setProperty('--section-color', `rgb(${r}, ${g}, ${b})`);
        pricingTable.style.setProperty('--button-text-color', `rgb(${255 - r}, ${255 - g}, ${255 - b})`);
        basicPlan.style.backgroundColor = `rgb(${r}, ${g}, ${b})`;
        proPlan.style.backgroundColor = `rgb(${r}, ${g}, ${b})`;
        premiumPlan.style.backgroundColor = `rgb(${r}, ${g}, ${b})`;
    }
  
    // Event listener for button click
    const colorChangeButton = document.getElementById('colorChangeButton');
    colorChangeButton.addEventListener('click', changeColors);
  });
  
