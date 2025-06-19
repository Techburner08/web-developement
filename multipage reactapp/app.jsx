import React from 'react';
import { BrowserRouter, Routes, Route, Link } from 'react-router-dom';

function App() {
  return (
    <BrowserRouter>
      {/* Navigation Menu */}
      <div style={{ background: '#eee', padding: '10px' }}>
        <Link to="/" style={{ marginRight: '10px' }}>Home</Link>
        <Link to="/about" style={{ marginRight: '10px' }}>About</Link>
        <Link to="/contact">Contact</Link>
      </div>

      {/* Page Routes */}
      <Routes>
        <Route path="/" element={<Home />} />
        <Route path="/about" element={<About />} />
        <Route path="/contact" element={<Contact />} />
      </Routes>
    </BrowserRouter>
  );
}

// Home Component
function Home() {
  return (
    <div>
      <h2>Home Page</h2>
      <p>Welcome to the Home page.</p>
    </div>
  );
}

// About Component
function About() {
  return (
    <div>
      <h2>About Page</h2>
      <p>This is the About page.</p>
    </div>
  );
}

// Contact Component
function Contact() {
  return (
    <div>
      <h2>Contact Page</h2>
      <p>You can reach us at contact@example.com</p>
    </div>
  );
}

export default App;
