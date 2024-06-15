/*
    Project name : Switches
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-switches
*/

const int buttonPin = 2;  // Digital pin connected to the push button switch
int buttonState = 0;      // Variable to store the state of the button

void setup() {
  Serial.begin(9600);     // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the button (LOW when pressed, HIGH when not pressed due to INPUT_PULLUP)
  buttonState = digitalRead(buttonPin);

  // Print the state of the button to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  delay(100); // Small delay to debounce the button (adjust as necessary)
}
