#include <Audio.h>
#include "MyVocoder.h"

MyVocoder myVocoder;
AudioOutputI2S out;
AudioInputI2S in;
AudioControlSGTL5000 audioShield;
AudioConnection patchCord0(in,0,myVocoder,0);
AudioConnection patchCord1(myVocoder,0,out,0);
AudioConnection patchCord2(myVocoder,1,out,1);

void setup() {
  Serial.begin(9600);
  AudioMemory(6);
  pinMode(0, INPUT);
  audioShield.enable();
  audioShield.volume(0.7);
  audioShield.inputSelect(AUDIO_INPUT_MIC);
  audioShield.micGain(10); // in dB
}

void loop() {
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  
  float attrel = map(sensorValue0,0,1100, 0, 2000)*0.01;
  float freq = map(sensorValue1,0,1100, 0, 4000)*0.1;
  float vol = map(sensorValue2, 0, 1100, 0, 80)*0.01; 

  //if (digitalRead(0) and int(myVocoder.getParamValue("Activate")) == 0) { // button is pressed
   // myVocoder.setParamValue("Activate",1);
  //}
  //if (digitalRead(0) and int(myVocoder.getParamValue("Activate")) == 1) { // button is pressed
   // myVocoder.setParamValue("Activate",0);
  //}
  Serial.println(myVocoder.getParamValue("Activate"));
  Serial.println(vol);
  myVocoder.setParamValue("Activate",1);
  myVocoder.setParamValue("AttRel",attrel);
  myVocoder.setParamValue("Freq",freq);
  audioShield.volume(vol);
}
