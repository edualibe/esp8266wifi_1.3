//#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>

char auth[] = "xCwm15Cqsx9oSMK3kY9_yrLto-JO_aVg";

#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

char ssid[] = "AA-2.4";
char pass[] = "Aaron202014";

char lecturaserialesp;
String lecturaserialesp_s;

void setup(){
  delay(10);
  Serial.begin(9600);
  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) { //Check for the connection
    delay(200);
  }
  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V0){ //pin16
  int pinValue = param.asInt();
  //1=encendido, 2=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V1){ //pin5 
  int pinValue = param.asInt();
  //3=encendido, 4=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V2){ //pin4 
  int pinValue = param.asInt();
  //5=encendido, 6=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V3){ //pin2
  int pinValue = param.asInt();
  //7=encendido, 8=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V4){ //pin14
  int pinValue = param.asInt();
  //9=encendido, 10=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V5){ //pin12
  int pinValue = param.asInt();
  //11=encendido, 12=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V6){ //pin13
  int pinValue = param.asInt();
  //13=encendido, 14=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V7){ //pin15
  int pinValue = param.asInt();
  //15=encendido, 16=apagado
  Serial.println(pinValue);
}

BLYNK_WRITE(V8){ //pin10
  int pinValue = param.asInt();
  //valor entre 100=0 y 280=180
  Serial.println(pinValue);
}



//********este bloque hace que la placa nodemcu esp8266 recuerde los valores de los pines al retomar conexion con internet****
/*
BLYNK_CONNECTED() {
    Blynk.syncAll();
}
*/
//************************

void loop(){
  Blynk.run();
}
