int colors = 0;

int ledpins[] = {2, 5, 8, 11, 3, 6, 9, 12, 4, 7, 10, 13};
int groundpins[] = {A0, A1};

void setLED(int color, int quad) {
  int index = (quad + (color * 4));
  if ((color / 3) == 0 ) { //single color (blue green red)
    digitalWrite(ledpins[index], LOW);
  }
  else if (color < 5) { // double color (teal yellow purple)
    digitalWrite(ledpins[(index % 12)], LOW);
    digitalWrite(ledpins[(index % 12) + 4], LOW);
  }
  else if (color == 5) { // double color (teal yellow purple)
    digitalWrite(ledpins[(index % 4)], LOW);
    digitalWrite(ledpins[(index % 4) + 8], LOW);
  }
  else if (color == 6) { // all colors (white)
    digitalWrite(ledpins[(index % 4)], LOW);
    digitalWrite(ledpins[(index % 4) + 4], LOW);
    digitalWrite(ledpins[(index % 4) + 8], LOW);
  }
}

void ledOff(int color, int quad) {
  int index = (quad + (color * 4));
  if ((color / 3) == 0 ) { //single color (blue green red)
    digitalWrite(ledpins[index], HIGH);
  }
  else if (color < 5) { // double color (teal yellow purple)
    digitalWrite(ledpins[(index % 12)], HIGH);
    digitalWrite(ledpins[(index % 12) + 4], HIGH);
  }
  else if (color == 5) { // double color (teal yellow purple)
    digitalWrite(ledpins[(index % 4)], HIGH);
    digitalWrite(ledpins[(index % 4) + 8], HIGH);
  }
  else if (color == 6) { // all colors (white)
    digitalWrite(ledpins[(index % 4)], HIGH);
    digitalWrite(ledpins[(index % 4) + 4], HIGH);
    digitalWrite(ledpins[(index % 4) + 8], HIGH);
  }
}

void allOff(int color) {
  for (int i = 0; i < 4; i++)  {
    ledOff(color, i);
  }
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], LOW);
}

void initCube() {
  for (int i = 0; i < 12; i++)  {
    pinMode(ledpins[i], OUTPUT);
  }
  for (int i = 0; i < 2; i++)  {
    pinMode(groundpins[i], OUTPUT);
  }
  for (int i = 0; i < 7; i++)  {
    allOff(i);
  }
}

int nextColor(int c) {
  return (c+1)%7;
}

void spin() {
  int delaytime = 50;
  for (int c = 0; c < 7; c++) {
    for (int z = 0; z < 2; z++) {
      digitalWrite(groundpins[z], HIGH);
      for (int y = 0; y < 4; y++)  {
        setLED(c, y);
        delay(delaytime);
        ledOff(c, y);
      }

      for (int y = 0; y < 4; y++)  {
        setLED(c, y);
        delay(delaytime);
        ledOff(c, y);
      }

      digitalWrite(groundpins[z], LOW);
    }
  }
}

void corners() {
  int delaytime = 100;
  for (int c = 0; c < 7; c++) {
    for (int y = 0; y < 4; y++)  {
      digitalWrite(groundpins[0], HIGH);
      setLED(c, y);
      delay(delaytime);
      ledOff(c, y);
      digitalWrite(groundpins[0], LOW);
      digitalWrite(groundpins[1], HIGH);
      setLED(c, (y+2)%4);
      delay(delaytime);
      ledOff(c, (y+2)%4);
      digitalWrite(groundpins[1], LOW);
    }
  }
}

void pulse() {
  int delaytime = 250;
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(groundpins[1], HIGH);
  for (int c = 0; c < 7; c++) {
    setLED(c, 0);
    setLED(c, 1);
    setLED(c, 2);
    setLED(c, 3);
    delay(delaytime);
    ledOff(c, 0);
    ledOff(c, 1);
    ledOff(c, 2);
    ledOff(c, 3);
  }
  for (int c = 5; c > 0; c--) {
    setLED(c, 0);
    setLED(c, 1);
    setLED(c, 2);
    setLED(c, 3);
    delay(delaytime);
    ledOff(c, 0);
    ledOff(c, 1);
    ledOff(c, 2);
    ledOff(c, 3);
  }
}

void faces() {
  int delaytime = 150;
  for (int c = 0; c < 7; c++) {
    digitalWrite(groundpins[0], HIGH);
    digitalWrite(groundpins[1], HIGH);
    setLED(c, 0);
    for (int r = 0; r < 2; r++) {
      setLED(c, 1);
      delay(delaytime);
      ledOff(c, 0);
      setLED(c, 2);
      delay(delaytime);
      ledOff(c, 1);
      setLED(c, 3);
      delay(delaytime);
      ledOff(c, 2);
      setLED(c, 0);
      delay(delaytime);
      ledOff(c, 3);
    }
    ledOff(c, 0);
    digitalWrite(groundpins[0], LOW);
    setLED(c, 0);
    setLED(c, 1);
    setLED(c, 2);
    setLED(c, 3);
    delay(delaytime);
    for (int r = 0; r < 2; r++) {
      digitalWrite(groundpins[1], LOW);
      digitalWrite(groundpins[0], HIGH);
      delay(delaytime);
      digitalWrite(groundpins[0], LOW);
      digitalWrite(groundpins[1], HIGH);
      delay(delaytime);
    }
    digitalWrite(groundpins[0], HIGH);
    ledOff(c, 0);
    ledOff(c, 1);
    ledOff(c, 2);
    ledOff(c, 3);
    delay(delaytime);
  }
}

void side2side() {
  int delaytime = 125;
  for (int c = 0; c < 7; c++) {
    digitalWrite(groundpins[0], HIGH);
    digitalWrite(groundpins[1], HIGH);
    for (int r = 0; r < 4; r++) {
      setLED(c, 0);
      setLED(c, 1);
      delay(delaytime);
      ledOff(c, 0);
      ledOff(c, 1);
      setLED(c, 2);
      setLED(c, 3);
      delay(delaytime);
      ledOff(c, 2);
      ledOff(c, 3);
    }
    for (int r = 0; r < 4; r++) {
      setLED(c, 1);
      setLED(c, 2);
      delay(delaytime);
      ledOff(c, 1);
      ledOff(c, 2);
      setLED(c, 3);
      setLED(c, 0);
      delay(delaytime);
      ledOff(c, 3);
      ledOff(c, 0);
    }
    digitalWrite(groundpins[1], LOW);
    digitalWrite(groundpins[0], LOW);
    setLED(c, 0);
    setLED(c, 1);
    setLED(c, 2);
    setLED(c, 3);
    for (int r = 0; r < 4; r++) {
      digitalWrite(groundpins[1], HIGH);
      delay(delaytime);
      digitalWrite(groundpins[1], LOW);
      digitalWrite(groundpins[0], HIGH);
      delay(delaytime);
      digitalWrite(groundpins[0], LOW);
    }
    ledOff(c, 0);
    ledOff(c, 1);
    ledOff(c, 2);
    ledOff(c, 3);
  }
}

void setup () {
  initCube();
}

void loop() {
  side2side();
  spin();
  pulse();
  faces();
  corners();
}
