<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Omary Particle | Science & Technology</title>
  <link rel="stylesheet" href="style.css" />
</head>
<body>
  <style type="text/css">
  body {
  margin: 0;
  font-family: 'Segoe UI', sans-serif;
  background-color: #f5f5f5;
  color: #333;
}

header {
  background-color: #1e1e1e;
  color: white;
  padding: 20px;
  display: flex;
  justify-content: space-between;
  align-items: center;
}

header h1 {
  margin: 0;
}

nav a {
  color: white;
  margin-left: 15px;
  text-decoration: none;
}

.hero {
  background-color: #0077cc;
  color: white;
  padding: 40px 20px;
  text-align: center;
}

.hero input {
  padding: 10px;
  width: 300px;
  margin-top: 15px;
  font-size: 16px;
  border: none;
  border-radius: 4px;
}

.articles {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
  gap: 20px;
  padding: 40px 20px;
}

.article {
  background-color: white;
  padding: 20px;
  border-radius: 8px;
  box-shadow: 0 2px 6px rgba(0,0,0,0.1);
}

.about {
  padding: 40px 20px;
  background-color: #eee;
}

footer {
  background-color: #1e1e1e;
  color: white;
  text-align: center;
  padding: 15px;
}
  
  
  </style>
  <script type="text/javascript">
  function searchArticles() {
  const input = document.getElementById('searchInput').value.toLowerCase();
  const articles = document.querySelectorAll('.article');

  articles.forEach(article => {
    const title = article.getAttribute('data-title').toLowerCase();
    article.style.display = title.includes(input) ? 'block' : 'none';
  });
}
  
  </script>
  <header>
    <h1>Omary Particle</h1>
    <nav>
      <a href="#articles">Articles</a>
      <a href="#about">About</a>
    </nav>
  </header>

  <section class="hero">
    <h2>Explore Science & Technology</h2>
    <p>Latest insights on rockets, satellites, weapons tech, and more.</p>
    <input type="text" id="searchInput" placeholder="Search articles..." onkeyup="searchArticles()">
  </section>

  <main id="articles" class="articles">
    <div class="article" data-title="Rocket Propulsion">
      <h3>Rocket Propulsion</h3>
      <p>Learn how rocket engines generate thrust and power spacecrafts.</p>
    </div>
    <div class="article" data-title="Satellite Communication">
      <h3>Satellite Communication</h3>
      <p>Understand how satellites transmit signals across the globe.</p>
    </div>
    <div class="article" data-title="Modern Weapon Systems">
      <h3>Modern Weapon Systems</h3>
      <p>Explore advanced defense technologies in modern warfare.</p>
    </div>
    <div class="article" data-title="Space Debris Management">
      <h3>Space Debris Management</h3>
      <p>Techniques and policies for managing orbital debris in space.</p>
    </div>
  </main>

  <section id="about" class="about">
    <h2>About Omary Particle</h2>
    <p>Omary Particle is a hub for science and technology enthusiasts. Our mission is to deliver engaging, accurate content about the technologies shaping our future.</p>
  </section>

  <footer>
    <p>&copy; 2025 Omary Particle. All rights reserved.</p>
  </footer>

  <script src="script.js"></script>
</body>
</html>