
int ledpinsRED[] = {4, 7, 10, 13};
int ledpinsGREEN[] = {3, 6, 9, 12};
int ledpinsBLUE[] = {2, 5, 8, 11};
int groundpins[] = {A4, A5};


void ledOff(int color, int quad) {

}

void allOff() {
  for (int i = 0; i < 4; i++)  {
  digitalWrite(ledpinsRED[i], HIGH);
  digitalWrite(ledpinsGREEN[i], HIGH);
  digitalWrite(ledpinsBLUE[i], HIGH);
  }
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], LOW);
}

void setup ()
{
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledpinsRED[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledpinsGREEN[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledpinsBLUE[i], OUTPUT);
  }
  for (int i = 0; i < 2; i++)
  {
    pinMode(groundpins[i], OUTPUT);
  }

    allOff();


}

void loop()
{
  twistRED();
  //dropRED();
  //diagonalRED();
  twistGREEN();
  //dropGREEN();
  //diagonalGREEN();
  twistBLUE();
  //dropBLUE();
  //diagonalBLUE();
}

void twistRED()
{
  int delaytime = 100;
  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsRED[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);




  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsRED[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);


  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsRED[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);

  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsRED[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsRED[2], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);
}

void dropRED()
{
  int dtime = 75;
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[3], LOW);


  //second time down
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[3], LOW);


}

void diagonalRED()
{
  int dtime = 100;
  //bottom pin 0 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(dtime);
  //bottom pin 0 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[0], LOW);
  delay(dtime);
  //top pin 1 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(dtime);
  //top pin 1 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsRED[1], LOW);
  //bottom pin 2 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(dtime);
  //bottom pin 2 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[2], LOW);
  //top pin 3 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(dtime);
  //top pin 3 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsRED[3], LOW);





  //top pin 0 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[0], HIGH);
  delay(dtime);
  //top pin 0 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsRED[0], LOW);
  delay(dtime);
  //bottom pin 1 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsRED[1], HIGH);
  delay(dtime);
  //bottom pin 1 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[1], LOW);
  //top pin 2 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsRED[2], HIGH);
  delay(dtime);
  //top pin 2 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsRED[2], LOW);
  //bottom pin 3 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsRED[3], HIGH);
  delay(dtime);
  //bottom pin 3 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsRED[3], LOW);

}

void twistGREEN()
{
  int delaytime = 100;
  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsGREEN[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);




  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsGREEN[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);


  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsGREEN[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);

  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsGREEN[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsGREEN[2], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);
}

void dropGREEN()
{
  int dtime = 75;
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[3], LOW);


  //second time down
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[3], LOW);


}

void diagonalGREEN()
{
  int dtime = 100;
  //bottom pin 0 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(dtime);
  //bottom pin 0 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[0], LOW);
  delay(dtime);
  //top pin 1 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(dtime);
  //top pin 1 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsGREEN[1], LOW);
  //bottom pin 2 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(dtime);
  //bottom pin 2 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[2], LOW);
  //top pin 3 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(dtime);
  //top pin 3 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsGREEN[3], LOW);





  //top pin 0 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[0], HIGH);
  delay(dtime);
  //top pin 0 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsGREEN[0], LOW);
  delay(dtime);
  //bottom pin 1 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsGREEN[1], HIGH);
  delay(dtime);
  //bottom pin 1 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[1], LOW);
  //top pin 2 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsGREEN[2], HIGH);
  delay(dtime);
  //top pin 2 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsGREEN[2], LOW);
  //bottom pin 3 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsGREEN[3], HIGH);
  delay(dtime);
  //bottom pin 3 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsGREEN[3], LOW);

}

void twistBLUE()
{
  int delaytime = 100;
  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsBLUE[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);




  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsBLUE[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);


  digitalWrite(groundpins[0], HIGH);
  delay(100);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsBLUE[2], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], LOW);
  delay(delaytime);
  digitalWrite(groundpins[0], LOW);

  digitalWrite(groundpins[1], HIGH);
  delay(100);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(delaytime);

  digitalWrite(ledpinsBLUE[3], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[0], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[1], LOW);
  delay(delaytime);
  digitalWrite(ledpinsBLUE[2], LOW);
  delay(delaytime);
  digitalWrite(groundpins[1], LOW);
}

void dropBLUE()
{
  int dtime = 75;
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[3], LOW);


  //second time down
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[0], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[1], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[2], LOW);

  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(dtime);
  digitalWrite(groundpins[0], LOW);
  digitalWrite(groundpins[1], HIGH);
  delay(dtime);
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[3], LOW);


}

void diagonalBLUE()
{
  int dtime = 100;
  //bottom pin 0 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(dtime);
  //bottom pin 0 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[0], LOW);
  delay(dtime);
  //top pin 1 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(dtime);
  //top pin 1 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsBLUE[1], LOW);
  //bottom pin 2 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(dtime);
  //bottom pin 2 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[2], LOW);
  //top pin 3 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(dtime);
  //top pin 3 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsBLUE[3], LOW);





  //top pin 0 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[0], HIGH);
  delay(dtime);
  //top pin 0 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsBLUE[0], LOW);
  delay(dtime);
  //bottom pin 1 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsBLUE[1], HIGH);
  delay(dtime);
  //bottom pin 1 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[1], LOW);
  //top pin 2 on
  digitalWrite(groundpins[0], HIGH);
  digitalWrite(ledpinsBLUE[2], HIGH);
  delay(dtime);
  //top pin 2 off
  digitalWrite(groundpins[0], LOW);
  digitalWrite(ledpinsBLUE[2], LOW);
  //bottom pin 3 on
  digitalWrite(groundpins[1], HIGH);
  digitalWrite(ledpinsBLUE[3], HIGH);
  delay(dtime);
  //bottom pin 3 off
  digitalWrite(groundpins[1], LOW);
  digitalWrite(ledpinsBLUE[3], LOW);

}
