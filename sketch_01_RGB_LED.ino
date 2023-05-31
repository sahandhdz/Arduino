//Here we define pins, assigning pins 3, 5, 6 to blue, green, and red LEDs respectively
#define BLUE 3
#define GREEN 5
#define RED 6

#define DT 25  // Delay time

void setup() {
  // put your setup code here, to run once:
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);

  // digitalWrite(BLUE, HIGH);
  // digitalWrite(GREEN, HIGH);
  // digitalWrite(RED, HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:
  int redValue = 255;
  int greenValue = 0;
  int blueValue = 0;

  for (int i=1; i<255; i++){
    redValue -= 1;
    greenValue += 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    //analogWrite(BLUE, blueValue);
    delay(DT);
  }

  for (int i=1; i<255; i++){
    greenValue -= 1;
    blueValue += 1;
    //analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(DT);
  }

  for (int i=1; i<255; i++){
    blueValue -= 1;
    redValue += 1;
    analogWrite(RED, redValue);
    //analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(DT);
  }

}
