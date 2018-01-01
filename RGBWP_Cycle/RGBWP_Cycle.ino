int redPin1 = 10;
int greenPin1 = 9;
int bluePin1 = 8;

int redPin2 = 7;
int greenPin2 = 6;
int bluePin2 = 5;

int redPin3 = 4;
int greenPin3 = 3;
int bluePin3 = 2;

void setup() {
  pinMode(redPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  pinMode(bluePin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  pinMode(bluePin2, OUTPUT);
  pinMode(redPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);
  pinMode(bluePin3, OUTPUT);
}

void loop() {
  setColor1(255, 0, 0); // Red Color
  setColor2(170, 0, 255); // Purple Color
  setColor3(255, 255, 255); // White Color
  delay(250);
  setColor1(0, 255, 0); // Green Color
  setColor2(255, 0, 0); // Red Color
  setColor3(170, 0, 255); // Purple Color
  delay(250);
  setColor1(0, 0, 255); // Blue Color
  setColor2(0, 255, 0); // Green Color
  setColor3(255, 0, 0); // Red Color
  delay(250);
  setColor1(255, 255, 255); // White Color
  setColor2(0, 0, 255); // Blue Color
  setColor3(0, 255, 0); // Green Color
  delay(250);
  setColor1(170, 0, 255); // Purple Color
  setColor2(255, 255, 255); // White Color
  setColor3(0, 0, 255); // Blue Color
  delay(250);
}

void setColor1(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin1, 255-redValue);
  analogWrite(greenPin1, 255-greenValue);
  analogWrite(bluePin1, 255-blueValue);
}

void setColor2(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin2, 255-redValue);
  analogWrite(greenPin2, 255-greenValue);
  analogWrite(bluePin2, 255-blueValue);
}

void setColor3(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin3, 255-redValue);
  analogWrite(greenPin3, 255-greenValue);
  analogWrite(bluePin3, 255-blueValue);
}
