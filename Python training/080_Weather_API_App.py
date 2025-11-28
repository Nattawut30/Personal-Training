# Weather API App using Python
# This is a final project!

import sys
import requests
from PyQt5.QtWidgets import (QApplication, QWidget, QLabel,
                            QLineEdit, QPushButton, QVBoxLayout)
from PyQt5.QtCore import Qt

class WeatherApp(QWidget):
    def __init__(self):
        super().__init__()
        self.city_label = QLabel("Enter City Name: ", self)
        self.city_input = QLineEdit(self)
        self.get_weather_button = QPushButton("Get Weather", self)
        self.temperature_label = QLabel(self)
        self.emoji_label = QLabel(self)
        self.description_label = QLabel(self)
        self.initUI()

    def initUI(self):
        self.setWindowTitle("My Weather App")

        vbox = QVBoxLayout()

        vbox.addWidget(self.city_label)
        vbox.addWidget(self.city_input)
        vbox.addWidget(self.get_weather_button)
        vbox.addWidget(self.temperature_label)
        vbox.addWidget(self.emoji_label)
        vbox.addWidget(self.description_label)

        self.setLayout(vbox)

        self.city_label.setAlignment(Qt.AlignCenter)
        self.city_input.setAlignment(Qt.AlignCenter)
        self.temperature_label.setAlignment(Qt.AlignCenter)
        self.emoji_label.setAlignment(Qt.AlignCenter)
        self.description_label.setAlignment(Qt.AlignCenter)

        self.city_label.setObjectName("city_label")
        self.city_input.setObjectName("city_input")
        self.get_weather_button.setObjectName("get_weather_button")
        self.temperature_label.setObjectName("temperature_label")
        self.emoji_label.setObjectName("emoji_label")
        self.description_label.setObjectName("description_label")

        self.setStyleSheet("""
            QLabel{
                font-family: Arial;
            }
            QLabel#city_label{
                font-size: 40px;
                font-style: italic;
            }
            QLineEdit#city_input{
                font-size: 40px;
            }
            QPushButton#get_weather_button{
                font-size: 30px;
                font-weight: bold;
            }
            QLabel#temperature_label{
                font-size: 75px;
            }
            QLabel#emoji_label{
                font-size: 100px;
                font-family: arial;
            }
            QLabel#description_label{
                font-size: 50px;
            }
        """)

        self.get_weather_button.clicked.connect(self.get_weather)

    def get_weather(self):

        api_key = "04f8589cc567c341d13aa3fcc5f59671"
        city = self.city_input.text()
        url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}"

        try:
            response = requests.get(url)
            response.raise_for_status() # Raise an exception if there's any error
            data = response.json()

            if data["cod"] == 200: # 200 HTMP means OK or FINE
                self.display_weather(data)

        except requests.exceptions.HTTPError as http_error:
            match response.status_code: # Let's work on the checking API
                case 400:
                    self.display_error("Bad Request: \n Please Check your Input")
                case 401:
                    self.display_error("Unauthorized: \n Invalid API Key")
                case 403:
                    self.display_error("Forbidden: \n Access Denied")
                case 404:
                    self.display_error("Not Found: \n City Not Found")
                case 500:
                    self.display_error("Internal Server Error: \n Please Try Again Later")
                case 502:
                    self.display_error("Bad Gateway: \n Invalid response from the server")
                case 503:
                    self.display_error("Service Unavailable: \n Server is down")
                case 504:
                    self.display_error("Gateway Timeout: \n No response from the server")
                case _:
                    self.display_error(f"HTTP Error Occured: \n {http_error}")


        except requests.exceptions.ConnectionError:
            self.display_error("Connection Error: \n Please Check your internet connection")
        except requests.exceptions.Timeout:
            self.display_error("Timeout Error: \n The request timed out")
        except requests.exceptions.TooManyRedirects:
            self.display_error("Too many Redirects: \n Check the URL")
        except requests.exceptions.RequestException as req_error:
            self.display_error(f"Request Error: \n {req_error}")


    def display_error(self, message):
        self.temperature_label.setStyleSheet("font-size: 30px;")
        self.temperature_label.setText(message)
        self.emoji_label.clear()
        self.description_label.clear()

    def display_weather(self, data):
        self.temperature_label.setStyleSheet("font-size: 75px;")
        temperature_k = data["main"]["temp"]
        temperature_c = temperature_k - 273.15 # Format to the C temp

        weather_id = data["weather"][0]["id"]

        weather_description = data["weather"][0]["description"] # Ask for W -> return description

        # Weather is also a dictionary

        self.temperature_label.setText(f"Temperature: {temperature_c:.0f}°C")
        self.description_label.setText(weather_description)

        self.emoji_label.setText(self.get_weather_emoji(weather_id))

    @staticmethod
    def get_weather_emoji(weather_id):

        if 200 <= weather_id <= 232:
            return "🌧️"
        elif 300 <= weather_id <= 321:
            return "☁️"
        elif 500 <= weather_id <= 531:
            return "☔️"
        elif 600 <= weather_id <= 622:
            return "❄️"
        elif 701 <= weather_id <= 741:
            return "🌁"
        elif weather_id == 762:
            return "🌋"
        elif weather_id == 771:
            return "💨"
        elif weather_id == 781:
            return "🌪️"
        elif weather_id == 800:
            return "🌞"
        elif 801 <= weather_id <= 804:
            return "🌥️"

if __name__ == '__main__':
    app = QApplication(sys.argv)
    weather_app = WeatherApp()
    weather_app.show()
    sys.exit(app.exec_())

# Completed The project