#define red 10
#define blue 11
#define control 12

#define Tflash 50
#define Tc 500

unsigned long ltc = 0;
unsigned long tflash = 0;

bool lr = false;
bool lon = false;

void setup()
{
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
}
void loop()
{
    while (!digitalRead(control))
        ;

    while ((millis() - ltc) < Tc)
    {
        digitalWrite(red, 1);
        delay(Tflash);
        digitalWrite(red, 0);
        delay(Tflash);
    }
    ltc = millis();
    while ((millis() - ltc) < Tc)
    {
        digitalWrite(blue, 1);
        delay(Tflash);
        digitalWrite(blue, 0);
        delay(Tflash);
    }
    ltc = millis();
}