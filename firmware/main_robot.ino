// Simplified AI Logic Example

String command = "none";
float confidence = 0;

void loop() {

  command = getMLCommand(confidence);

  if (command == "help" && confidence > 0.7) {
    moveForward();
  }
  else if (command == "vibration") {
    stopMotors();
    buzzerOn();
  }
  else if (command == "person") {
    stopMotors();
  }
  else {
    exploreMode();
  }
}
