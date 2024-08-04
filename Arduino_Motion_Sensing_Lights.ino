//define Arduino microcontroller pins
int echo = 2;
int trig = 3;
int LEDs = 5;

float distance; // in cm
int threshold = 55; //sensor threshold in cm

void setup() {
  //set Arduino pins to read in/out signals
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LEDs, OUTPUT);
}

void loop() {
  //ultrasonic sensor read in
  digitalWrite(trig, HIGH); 
  delay(1);
  digitalWrite(trig, LOW);

  //read in distance from sensor (in cm)
  distance = pulseIn(echo, HIGH) * 0.017; //convert to cm

  // turn lights on with motion sensor
  if(distance <= threshold)
  {
    digitalWrite(LEDs, HIGH);
    delay(1000); // 10 sec delay
  }
  else
  {
    //turn lights off if no motion is sensed
    digitalWrite(LEDs, LOW);

  }
}
