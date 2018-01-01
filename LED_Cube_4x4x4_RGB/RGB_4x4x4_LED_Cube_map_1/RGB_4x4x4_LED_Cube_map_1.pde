

#include "Tlc5940.h"

#define LayerOne 16
#define LayerTwo 4
#define LayerThree 2
#define LayerFour 15

float CubeBrig = 0.10;
float CubeSat = 1.00;
int CubeRes = 2047;

int RedCal = 2048;
int GreenCal = -512;
int BlueCal = 768;

int LayerDuration = 4167;
int layer = 0;
unsigned long oldMicros = 0;

float hueAAone = 0.00;
float hueADone = 0.00;
float hueDAone = 0.00;
float hueDDone = 0.00;

float hueAAfour = 0.00;
float hueADfour = 0.00;
float hueDAfour = 0.00;
float hueDDfour = 0.00;

void setup()
{
  /* Call Tlc.init() to setup the tlc.
     You can optionally pass an initial PWM value (0 - 4095) for all channels.*/
  pinMode(LayerOne, OUTPUT);
  pinMode(LayerTwo, OUTPUT);
  pinMode(LayerThree, OUTPUT);
  pinMode(LayerFour, OUTPUT);
  
  Tlc.init(10);
  
  digitalWrite(LayerFour, LOW);
  digitalWrite(LayerOne, HIGH);
  digitalWrite(LayerTwo, HIGH);
  digitalWrite(LayerThree, HIGH);
  

}



void loop(){
for(int i = 0; i <=47; i++){
  Tlc.set(i, 4000);
  if(i>=1)  Tlc.set(i-1, 10);
  Tlc.update();
  delay(500);

}
  
}
