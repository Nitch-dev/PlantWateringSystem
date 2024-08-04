const int moistureSensor = A0;
#define motorP 9
#define motorN 8
#define speed 10
int MoistureLvl = 0; 
int dry = 230;
int wet = 300;

void setup() {
  Serial.begin(115200);
  pinMode(moistureSensor,INPUT);
  pinMode(motorP,OUTPUT);
  pinMode(motorN,OUTPUT);
  pinMode(speed,OUTPUT);
}

void loop() {
  MoistureLvl = analogRead(moistureSensor);
  Serial.println(MoistureLvl);
  if(MoistureLvl <= dry){
    Serial.println("Motor is On");
    digitalWrite(speed,HIGH);
    digitalWrite(motorP,HIGH); //turn motor on since plant is dry
    digitalWrite(motorN,LOW); //turn motor on since plant is dry
    
  }
  else if(MoistureLvl >= wet) {
    Serial.println("Motor is Off");
    digitalWrite(speed,LOW);
    digitalWrite(motorP,LOW); //turn motor on since plant is dry
    digitalWrite(motorN,LOW); //turn motor on since plant is dry
  }
  delay(1000);
}
