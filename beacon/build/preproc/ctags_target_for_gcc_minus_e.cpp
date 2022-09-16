# 1 "/home/raider0ne/projects/hardware/dflab/beacon/beacon.ino"







unsigned long ltc = 0;
unsigned long tflash = 0;

bool lr = false;
bool lon = false;

void setup()
{
    pinMode(10, 0x1);
    pinMode(11, 0x1);
}
void loop()
{
    while (!digitalRead(12))
        ;

    while ((millis() - ltc) < 500)
    {
        digitalWrite(10, 1);
        delay(50);
        digitalWrite(10, 0);
        delay(50);
    }
    ltc = millis();
    while ((millis() - ltc) < 500)
    {
        digitalWrite(11, 1);
        delay(50);
        digitalWrite(11, 0);
        delay(50);
    }
    ltc = millis();
}
