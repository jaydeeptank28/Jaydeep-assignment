const express = require('express');
const app = express();
const axios = require('axios');
const bodyparser = require('body-parser')

app.set('view engine', 'ejs')
app.use(bodyparser.urlencoded({ extended: true }))



app.get('/', (req, res) => {
  res.render('weather', {
    weatherData: null
  })
})

app.post('/', async (req, res) => {
  const city = req.body.city;
  const apiKey = "47d05aac870deb2e5e959c6c98f2cde5";
  const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

  try {
    const response = await axios.get(url);
    const weatherData = response.data;

    const temp = Math.ceil(weatherData.main.temp);
    const cityname = weatherData.name;
    const country = weatherData.sys.country;
    const description = weatherData.weather[0].description;

    res.render('weather', {
      weatherData: {
        temp: temp,
        cityname: cityname,
        country: country,
        description: description
      }
    });


  }

  catch (error) {
    console.error(error);
    res.status(500).send('An error occurred while fetching the weather data.');
  }


});


app.listen(3000, () => {
  console.log('Server Running on 3000 Port');
})



