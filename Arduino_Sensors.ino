

const int analogInPin0 = A0;// Analog input pins
const int analogInPin1 = A1;
const int analogInPin2 = A2;
const int analogInPin3 = A3;
 
//Arrays for the 4 inputs**********************************************
int sensorValue[4] = {0,0,0,0};
int voltageValue[4] = {0,0,0,0};
//int  v1[4] = {0,0,0,0};
 
//Char used for reading in Serial characters
char inbyte = 0;
//*******************************************************************************************
 
void setup()
{
  Serial.begin(9600);
 }
 
void loop() {
  readSensors();
  getVoltageValue();

  sendAndroidValues();
  delay(2000);
}
 
void readSensors()
{
  // read the analog in value to the sensor array
  sensorValue[0] = analogRead(analogInPin0);
  sensorValue[1] = analogRead(analogInPin1);
  sensorValue[2] = analogRead(analogInPin2);
  sensorValue[3] = analogRead(analogInPin3);
}

void sendAndroidValues()
 {

 Serial.print('#');

  for(int k=0; k<4; k++)
  {
    if (voltageValue[k]<=99)
   // if (v1[k]<=99)
    {
      Serial.print("0");
  
    }
    Serial.print(voltageValue[k]);
   // Serial.print(v1[k]);
    Serial.print('+');
  
  }
 Serial.print('~'); 
 Serial.println();
 delay(200);       
}
 
void getVoltageValue()
{
  for (int x = 0; x < 4; x++)
  {
    voltageValue[x] = (sensorValue[x]);

 //  v1[x]=map(sensorValue[x],0,1023,0,255);
    
   
  }
}
