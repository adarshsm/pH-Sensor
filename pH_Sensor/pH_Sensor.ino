float pH, pHraw, EC, ECraw;
int sensorValue;
void setup() {
  Serial.begin(9600);
}

void loop() {

  sensorValue =analogRead(A0);
  float pHraw = analogRead(A1);
  Serial.println(pHraw);
  
  if (pHraw<100){
     pH = 7.2;
     Serial.println(pH); 
  }
  
  if (pHraw>=100 && pHraw <250){
     pH = 7.1;
     
    Serial.println(pH);
  }
  
  if (pHraw>=250 && pHraw <400){
    pH = 6.97;
    Serial.println(pH);
  }
  if (pHraw>=400 && pHraw <600){
    pH = 6.45;
    Serial.println(pH);
  }

  if (pHraw>=600 && pHraw <800){
    pH = 7.23;
    Serial.println(pH);
  }

  if (pHraw>=800 && pHraw <1010){
    pH = 7.45;
    Serial.println(pH);
  }
  
  if (pHraw > 1010){
  float pH = 0;
  Serial.println(pH);
  }
  
  float ECraw = analogRead(A0);
  Serial.println(ECraw);
    
  if (ECraw<100){
     EC = 10;
     Serial.println(EC);
  }
  
  if (ECraw>=100 && ECraw <250){
     EC = 4.567;
    Serial.println(EC);
  }
  
  if (ECraw>=250 && ECraw <400){
    EC = 1.5;
    Serial.println(EC);
  }
  if (ECraw>=400 && ECraw <600){
    EC = 0.56;
    Serial.println(EC);
  }

  if (ECraw>=600 && ECraw <800){
    EC = 0.35;
    Serial.println(EC);
  }

  if (ECraw>=800 && ECraw <1010){
    EC = 0.23;
    Serial.println(EC);
  }
  
  if (ECraw > 1010){
  float EC = 0;
  Serial.println(EC);
  }
  
  delay(1000);
  
}

