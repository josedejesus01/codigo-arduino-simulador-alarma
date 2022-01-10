int gas;
int piezo = 13;
void setup()
{
     pinMode(A0, INPUT);
     pinMode(piezo, OUTPUT);
}
void loop()
{
     gas = analogRead(A0);
     if (gas >= 600)
        {
          tone(piezo, 523, 200);
          delay(500);
        }
}