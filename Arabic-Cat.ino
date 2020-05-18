//Arabic-Cat.ino
//Created by PK, JongamerProgramming
//This file was made during an Arduino-Lesson by https://github.com/grischahaag
//For more Infos open https://github.com/JongamerProgramming/Arduino/blob/master/ReadMe.txt

void setup(){ 
}

//Töne
int d = 293;
int e = 329;
int f = 349;
int g = 391;
int a = 440;
int h = 493;
int c = 523;
int d2 = 587;
int e2 = 659;
int f2 = 698;
int g2 = 783;
int a2 = 880;
int h2 = 987;
int c2 = 1046;
int d3 = 1174;
int e3 = 1318;
int f3 = 1396;

//Längen
int zweiunddrei = 41;
int sechz = 83;
int pktSechz = 125;
int achtel = 166;
int pktAchtel = 250;
int viertel = 333;
int pktViertel = 500;
int halbe = 666;
int pktHalbe = 1000;
int ganze = 1333;
int pktGanze = 1920;


void loop()
{
  tone(3, c);
  delay(ganze);
  Zeile1();
  Zeile2();
  Zeile3();
  Zeile4();
  Zeile5();
  Zeile6();
  Zeile7();
  
  noTone(3); // Der Ton wird abgeschaltet
  delay(500); // Der Lautsprecher bleibt eine Sekunde aus
}

void Zeile1() {
  tone(3, e);
  delay(viertel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(halbe);
  tone(3, e);
  delay(pktAchtel);
  noTone(3);
  delay(10);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(pktViertel);
  tone(3, g);
  delay(achtel);
  tone(3, a);
  delay(pktSechz);
  tone(3, g);
  delay(pktAchtel);
  tone(3, f);
  delay(achtel);
}

void Zeile2() {
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(50);
  tone(3, e);
  delay(pktViertel);
  noTone(3);
  delay(50);
  tone(3, e);
  delay(viertel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(halbe);
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(10);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, a);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(viertel);
  tone(3, e);
  delay(viertel);
  tone(3, f);
  delay(viertel);
  tone(3, e);
  delay(sechz);
  tone(3, d);
  delay(viertel);
  tone(3, f);
  delay(achtel);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(halbe);
}

void Zeile3() {
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(10);
  tone(3, e);
  delay(pktSechz);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, a);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(viertel);
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(10);
  tone(3, e);
  delay(halbe);
  tone(3, f);
  delay(achtel);
  tone(3, d);
  delay(achtel);
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(pktAchtel);
  tone(3, e2);
  delay(achtel);
  tone(3, f2);
  delay(achtel);
  tone(3, e2);
  delay(achtel);
  tone(3, d2);
  delay(achtel);
  tone(3, c);
  delay(achtel);
}

void Zeile4() {
  noTone(3);
  delay(zweiunddrei);
  tone(3, g);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  noTone(3);
  delay(10);
  tone(3, f);
  delay(pktAchtel);
  noTone(3);
  delay(10);
  tone(3, f);
  delay(achtel);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(pktViertel);
  tone(3, c);
  delay(achtel);
  tone(3, e);
  delay(viertel);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(zweiunddrei);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, a);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
}

void Zeile5(){
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(zweiunddrei);
  tone(3, e);
  delay(viertel);
  tone(3, f);
  delay(sechz);
  tone(3, g);
  delay(sechz);
  tone(3, f);
  delay(achtel);
  noTone(3);
  delay(zweiunddrei);
  tone(3, f);
  delay(zweiunddrei);
  noTone(3);
  delay(sechz);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(halbe);
  tone(3, c2);
  delay(achtel);
  noTone(zweiunddrei);
  tone(3, c2);
  delay(achtel);
  tone(3, e);
  delay(zweiunddrei);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  noTone(3);
  delay(achtel);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, a);
  delay(achtel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(zweiunddrei);
  tone(3, e);
  delay(viertel);  
}

void Zeile6(){
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(sechz);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, d);
  delay(achtel);
  tone(3, e);
  delay(viertel);
  noTone(3);
  delay(achtel);
  tone(3, e3);
  delay(achtel);
  tone(3, f3);
  delay(achtel);
  tone(3, e3);
  delay(achtel);
  tone(3, d3);
  delay(achtel);
  tone(3, c2);
  delay(achtel);
  tone(3, e);
  delay(viertel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(viertel);
  noTone(3);
  delay(achtel);
  tone(3, g);
  delay(achtel);
}

void Zeile7(){
  tone(3, e);
  delay(viertel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(zweiunddrei);
  tone(3, g);
  delay(zweiunddrei);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(achtel);
  tone(3, c);
  delay(viertel);
  tone(3, e);
  delay(viertel);
  tone(3, g);
  delay(achtel);
  tone(3, f);
  delay(achtel);
  tone(3, g);
  delay(pktViertel);
  noTone(3);
  delay(achtel);
  tone(3, g);
  delay(viertel);
  tone(3, e);
  delay(achtel);
  noTone(3);
  delay(pktSechz);
  tone(3, g);
  delay(pktSechz);
  tone(3, f);
  delay(pktAchtel);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(achtel);
  tone(3, c2);
  delay(achtel);
  tone(3, d3);
  delay(achtel);
}

void Zeile8(){
  tone(3, d);
  delay(viertel);
  noTone(3);
  delay(zweiunddrei);
  tone(3, f);
  delay(sechz);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(pktViertel);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(viertel);
  tone(3, f);
  delay(achtel);
  tone(3, e);
  delay(achtel);
  tone(3, d);
  delay(achtel);
  tone(3, c);
  delay(achtel);
  noTone(3);
  delay(zweiunddrei);
  tone(3, c);
  delay(viertel);
  tone(3, d);
  delay(viertel);
  tone(3, f);
  delay(achtel);
  tone(3, e);
  delay(achtel);
  tone(3, f);
  delay(pktViertel);
  tone(3, e);
  delay(achtel);
}

void Zeile9(){
  tone(3, f);
  delay(zweiunddrei);
  tone(3, g);
  delay(sechz);
  tone(3, f);
  delay(viertel);
  tone(3, e);
  delay(halbe);
}
