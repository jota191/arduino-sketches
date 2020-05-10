#include <Servo.h>

#define SERVPIN 9
#define MINPOS 52
#define MAXPOS 152

Servo serv;
int pos = 0;

void setup()
{
  serv.attach(SERVPIN);//,480,2400);
}

void loop()
{
  serv.write(MAXPOS - MINPOS);
  delay(4000);

  for (pos = MINPOS; pos <= MAXPOS; pos++)
    {
      serv.write(pos);
      delay(5);
    }
  delay(500);
  for (pos = MAXPOS; pos >= MINPOS; pos--)
    {
      serv.write(pos);
      delay(15);
    }
}
