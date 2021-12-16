@import url("https://fonts.googleapis.com/css2?family=El+Messiri:wght@500;600;700&family=Nunito+Sans:wght@300&family=Philosopher:ital,wght@0,700;1,400&family=Playfair+Display:ital,wght@1,700&display=swap");
@import url("https://pro.fontawesome.com/releases/v5.10.0/css/all.css");
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

html {
  font-size: 10px;
  scroll-behavior: smooth;
}

::-webkit-scrollbar {
  width: 1rem;
}

::-webkitscrollbar-track {
  background: #2e2020;
  box-shadow: 0 0 10px #8d1616 inset;
}

::-webkit-scrollbar-thumb {
  width: 0.5rem;
  background: #817d7d;
  border-radius: 5rem;
}

body {
  font-family: "Nunito Sans", sans-serif;
  background-color: #eee;
  height: 150rem;
}

.container {
  padding-left: 1.5rem;
  padding-right: 1.5rem;
  margin-left: auto;
  margin-right: auto;
}

@media (max-width: 420px) {
  .container {
    width: 100%;
  }
}
@media (min-width: 768px) {
  .container {
    width: 75rem;
  }
}
@media (min-width: 992px) {
  .container {
    width: 97rem;
  }
}
@media (min-width: 1200px) {
  .container {
    width: 116rem;
  }
}
@media (min-width: 1400px) {
  .container {
    width: 136rem;
  }
}
a {
  text-decoration: none;
  font-family: "Philosopher", sans-serif;
  font-size: 1.6rem;
}

.wrapper {
  padding: 3rem 0;
}
.wrapper .reset-flex {
  display: flex;
  flex-flow: row-reverse wrap;
  gap: 4rem;
}
.wrapper .reset-flex nav {
  grid-column: span 2;
  grid-row: span 1;
  background: #fafafa;
  border-radius: 0.5rem;
  box-shadow: 0 0 10px #cfcfcf;
  display: flex;
  justify-content: space-evenly;
  align-items: center;
}
.wrapper .reset-flex nav a {
  display: block;
  padding: 1.2rem 0;
  text-transform: capitalize;
  color: #888;
  text-align: center;
  font-weight: 700;
}
.wrapper .reset-flex nav a i {
  display: block;
  margin-bottom: 0.5rem;
}
.wrapper .reset-flex nav a.active {
  color: #DD5555;
}
.wrapper .reset-flex nav .video {
  grid-row: span 1;
  grid-column: span 2;
  margin: 4rem 4rem 4rem 0;
  background: #fafafa;
  border-radius: 0.5rem;
  box-shadow: 0 0 10px #cfcfcf;
}
.wrapper .reset-flex .place {
  grid-column: span 1;
  grid-row: span 4;
  background: #fafafa;
  border-radius: 0.5rem;
  box-shadow: 0 0 10px #cfcfcf;
  width: 100%;
  padding: 2rem;
  text-align: center;
  display: flex;
  flex-direction: column;
  align-items: center;
}
.wrapper .reset-flex .place img {
  width: 20rem;
  height: 20rem;
  display: block;
  border-radius: 50%;
}
.wrapper .reset-flex .place h3 {
  font-family: "Playfair Display", serif;
  font-size: 2rem;
  font-weight: 700;
  text-transform: capitalize;
  margin: 1.5rem 0;
  color: #DD5555;
}
.wrapper .reset-flex .place p {
  font-family: "El Messiri", sans-serif;
  font-size: 1.8rem;
  margin: 0 0 1rem;
}
.wrapper .reset-flex .place button {
  border: none;
  border-radius: 0.5rem;
  background: #DD5555;
  color: #fafafa;
  padding: 1.5rem 2.25rem;
  text-transform: capitalize;
}
.wrapper .reset-flex .about {
  grid-column: span 1;
  grid-row: span 4;
  background: #fafafa;
  border-radius: 0.5rem;
  box-shadow: 0 0 10px #cfcfcf;
  overflow: hidden;
}
.wrapper .reset-flex .about img {
  width: 100%;
  height: 50%;
  display: block;
}
.wrapper .reset-flex .about .content {
  padding: 1.5rem;
}
.wrapper .reset-flex .about .content h3 {
  font-family: "Playfair Display", serif;
  font-size: 2rem;
  font-weight: 700;
  text-transform: capitalize;
  margin: 1.5rem 0;
  color: #DD5555;
}
.wrapper .reset-flex .about p {
  font-family: "El Messiri", sans-serif;
  font-size: 1.6rem;
  margin: 0 0 1rem;
}

/*# sourceMappingURL=main.cc.map */
