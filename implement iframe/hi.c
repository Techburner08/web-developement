Q1. Use <iframe> tag:-
 Implement <iframe> tag by embedding the following elements from another webpage:
<header>, <nav>, <section>, <article>, <footer>. Add a navigation bar inside <nav>
with links to different sections of the page using the <a> tag.
 Embed a table from another webpage using <iframe>. The structure of the table
should be as:-
Embed <map> and <area> from another web page using <iframe>. Create a
clickable map of a school or college campus.
Use an <img> tag to display a campus map.
Use a <map> with multiple <area> tags to create clickable zones for different
buildings (e.g., Library, Cafeteria, Sports Complex).
Each <area> should link to a new page with information about that building. Use alt
attributes to describe each area.6
CODE:
// Main.html
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Iframe1 Example</title>
</head>
<body>
<h2>Embedding Webpage Sections with &lt;iframe&gt;</h2>
<iframe src="example.html" width="500px" height="700px"></iframe>
<iframe src="tablepage.html" width="300px" height="700px"></iframe>
<iframe src="clickablemap.html" width="600px" height="700px" style="border: 2px solid
black;"></iframe>
</body>
</html>
// Example.html
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Document</title>
<style>
body {
font-family: Arial, sans-serif;
margin: 0;
padding: 0;
}
header {
background-color: #333; color:
white;
text-align: center;
padding: 15px;
font-size: 24px;
}7
nav {
background-color: #444;
padding: 10px;
text-align: center;
}
nav a { color:
white;
text-decoration: none;
margin: 0 15px;
font-size: 18px;
}
nav a:hover {
text-decoration: underline;
}
section {
padding: 20px;
}
article {
background-color: #f4f4f4;
padding: 15px;
margin: 10px 0;
border-left: 5px solid #333;
}
footer {
background-color: #222; color:
white;
text-align: center;
padding: 10px; position:
relative; bottom: 0;
width: 100%;
}
</style>
</head>
<body>
<header>
Welcome to My Embedded Page
</header>8
<nav>
<a href="#home">Home</a>
<a href="#about">About</a>
<a href="#services">Services</a>
<a href="#contact">Contact</a>
</nav>
<section>
<h2>About This Page</h2>
<p>This page is embedded using an &lt;iframe&gt;. It contains multiple sections like a header,
navigation bar, content area, and a footer.</p>
<article>
<h3>Article 1</h3>
<p>This is the first article on the page.</p>
</article>
</section>
<section id="home">
<h2>Home</h2>
<p>Welcome to the homepage. Explore our website and learn more.</p>
</section>
<section id="about">
<h2>About</h2>
<p>We are a company dedicated to providing excellent services.</p>
</section>
<section id="services">
<h2>Services</h2>
<p>We offer various services, including web development and design.</p>
</section>
<section id="contact">
<h2>Contact</h2>
<p>Get in touch with us via email at contact@example.com.</p>
</section>
<footer>
&copy; 2025 Example Page | All Rights Reserved
</footer>
</body>
</html>9
//tablepage.html
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Document</title>
</head>
<body>
<table border="1">
<tr>
<th rowspan="3">Day</th>
<th colspan="4">Seminar</th>
</tr>
<tr>
<th colspan="2">Schedule</th>
<th colspan="2" rowspan="2">Topic</th>
</tr>
<tr>
<th>Begin</th>
<th>End</th>
</tr>
<tr>
<td rowspan="2">Monday</td>
<td rowspan="2">8:00 a.m.</td>
<td rowspan="2">5.00 p.m.</td>
<td colspan="2">Introduction to XML</td>
</tr>
<tr>
<td colspan="2">Validity:DTD and Relax NG</td>
</tr>
<td rowspan="3">Tuesday</td>
<td>8.00 a.m.</td>
<td>11.00 a.m.</td>
<td colspan="2">XPath</td>
</tr>
<tr>
<td>11.00 a.m.</td>
<td>2.00 p.m.</td>10
<td rowspan="2" colspan="2">XSL Transformations</td>
</tr>
<tr>
<td>2.00 p.m.</td>
<td>5.00 p.m.</td>
</tr>
<tr>
<td>Wednesday</td>
<td>8.00 a.m.</td>
<td>12.00 p.m.</td>
<td colspan="2">XSL Formatting Objects</td>
</tr>
</table>
</body>
</html>
<! -- ClickableMap.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Clickable Campus Map</title>
</head>
<body>
<h2>University Campus Map</h2>
<img src="campus.jpg" usemap="#campusmap" width="800px" height="800px" alt="University
Campus Map">
<map name="campusmap">
<area shape="rect" coords="50,100,200,200" href="library.html" alt="Library">
<area shape="circle" coords="400,300,60" href="cafeteria.html" alt="Cafeteria">
<area shape="rect" coords="600,150,750,300" href="sports.html" alt="Sports Complex">
<area shape="poly" coords="300,500,350,550,400,500,350,450" href="admin.html" alt="Administration">
<area shape="rect" coords="500,600,650,750" href="hostel.html" alt="Hostel">
</map>
<p>Click on a building to view more details.</p>
</body>
</html>11
<! -- library.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Library</title>
</head>
<body>
<h2>Library</h2>
<p>The library contains a vast collection of books, research papers, and digital resources for
students.</p>
<a href="mapembed.html">Go Back to Campus Map</a>
</body>
</html>
<! -- cafeteria.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Cafeteria</title>
</head>
<body>
<h2>Cafeteria</h2>
<p>The cafeteria serves a variety of meals, snacks, and beverages throughout the day.</p>
<a href="mapembed.html">Go Back to Campus Map</a>
</body>
</html>
<! -- sports.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Sports Complex</title>
</head>
<body>
<h2>Sports Complex</h2>12
<p>The sports complex includes a gym, basketball courts, and a football field.</p>
<a href="mapembed.html">Go Back to Campus Map</a>
</body>
</html>
<! -- hostel.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Hostel</title>
</head>
<body>
<h2>Hostel</h2>
<p>The hostel provides comfortable accommodation for students, with modern facilities and
security.</p>
<a href="mapembed.html">Go Back to Campus Map</a>
</body>
</html>
<! -- admin.html -->
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Administration</title>
</head>
<body>
<h2>Administration Office</h2>
<p>The administration office handles admissions, student records, and other official tasks.</p>
<a href="mapembed.html">Go Back to Campus Map</a>
</body>
</html>
