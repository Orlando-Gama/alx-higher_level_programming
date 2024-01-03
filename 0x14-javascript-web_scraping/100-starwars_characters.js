#!/usr/bin/node

const axios = require('axios');
const id = process.argv[2];
const url = `https://swapi-api.hbtn.io/api/films/${id}`;

axios.get(url)
  .then(response => {
    const data = response.data;
    const characters = data.characters;

    // Use Promise.all to handle multiple asynchronous requests
    const characterPromises = characters.map(characterUrl => axios.get(characterUrl));

    Promise.all(characterPromises)
      .then(responses => {
        for (const response of responses) {
          const characterData = response.data;
          console.log(characterData.name);
        }
      })
      .catch(error => {
        console.error('Error fetching character data:', error);
      });
  })
  .catch(error => {
    console.error('Error fetching film data:', error);
  });
