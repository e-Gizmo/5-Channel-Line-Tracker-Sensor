/*
   eGizmo 5 Channel Line sensor

   This is a sample sketch for displaying
   the digital output on the serial monitor
   of a line sensor.

   Codes by
   e-Gizmo Mechatronix Central
   http://www.e-gizmo.com
   April 7, 2017


*/
//The codes of Collision sensor
int line1;
int line2;
int line3;
int line4;
int line5;

void setup()
{
  Serial.begin(9600);

  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}
void loop()
{
  line1 = digitalRead(3);
  line2 = digitalRead(4);
  line3 = digitalRead(5);
  line4 = digitalRead(6);
  line5 = digitalRead(7);

  if (line1 == 0)
  {
    Serial.println("D1");
  }
  if (line2 == 0)
  {
    Serial.println("D2");
  }
  if (line3 == 0)
  {
    Serial.println("D3");
  }
  if (line4 == 0)
  {
    Serial.println("D4");
  }
  if (line5 == 0)
  {
    Serial.println("D5");
  }
}
