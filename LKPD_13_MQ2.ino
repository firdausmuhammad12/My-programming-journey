#define MQ2pin 16
int sensorValue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("memanaskan MQ2");
delay (20000);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = digitalRead (MQ2pin);
Serial.print("digital output: ");
Serial.print(sensorValue);
if (sensorValue){
  Serial.println(" | Smoke/gas: tidak terdeteksi");
}else{
  Serial.println(" | smoke/gas: terdeteksi");
}
delay(2000);
}
