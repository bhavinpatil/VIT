int outputpin = A0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  //Setting the baud rate for Serial Monitor Communication 

}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(outputpin);
  float millivolts = (analogValue/1024.0) * 3300; //3300 is the voltage provided by NodeMCU
  float celsius = millivolts/10;
  Serial.print("in DegreeC=   ");
  Serial.println(celsius);

  float fahrenheit = ((celsius * 9)/5 + 32);
  Serial.print(" in Farenheit=   ");
  Serial.println(fahrenheit);

  delay(1500);
  
}
