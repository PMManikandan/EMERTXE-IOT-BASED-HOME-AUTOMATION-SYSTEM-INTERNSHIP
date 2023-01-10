#define BLYNK_TEMPLATE_ID "TMPLdeNXb2u2"
#define BLYNK_DEVICE_NAME "Home Automaton"
#define BLYNK_AUTH_TOKEN "XwlwWsMWIse2rd7ka5OohfcvJVPdNTIg"

#include <SPI.h>
#include <Ethernet.h>
#include <BlynkSimpleEthernet.h>

#define LED     2


char auth[] = BLYNK_AUTH_TOKEN;


BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if (value)
  {
    digitalWrite(LED,1);
  }
  else
  {
    digitalWrite(LED,0);
  }
  
}

void setup() 
{
  pinMode(LED, OUTPUT);
  // put your setup code here, to run once:
  Blynk.begin(auth);
}

void loop() 
{
  // put your main code here, to run repeatedly:
   Blynk.run();

}
