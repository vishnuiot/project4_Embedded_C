// Pin parameters
const int chargePin = 13;
const int monitorPin = A0;
const int resistorValue = 10000; // 10k Ohm

// Circuit Parameters
const float R = 10000.0;    // 10k Ohm resistor
const float C = 0.0001;     // 100uF capacitor (convert to Farads)
const float tau = R * C;    // Time constant

void setup() {
  // put your setup code here, to run once:
  pinMode(chargePin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   // Charge
  digitalWrite(chargePin, HIGH);
  for(int i=0; i<100; i++){
    int adcValue=analogRead(monitorPin);
    float voltage=(adcValue /1024.0)*5; //Seeduino ADC is 10 Bit
    // Serial.print("Spannung:");
    Serial.print("0,"); Serial.print("5,"); 

    Serial.println(voltage);
    delay(50);
  }
  
  // Discharge
  digitalWrite(chargePin, LOW);
  for(int i=0; i<100; i++){
    int adcValue=analogRead(monitorPin);
    float voltage=(adcValue /1024.0)*5; //Seeduino ADC is 10 Bit
    // Serial.print("Spannung:");
    Serial.print("0,"); Serial.print("5,"); 
    Serial.println(voltage);
    delay(50);
  }

}