#define echoPin 7
#define trigPin 8
#define LEDPin 13 

int maximumRange = 400;
int minimumRange = 0;
long duration,distance;

void setup() {

     
     pinMode(trigPin,OUTPUT);
     pinMode(echoPin,INPUT);
     pinMode(LEDPin,OUTPUT);
     

}

void loop() {

     Serial.begin(9600);
     
     digitalWrite(trigPin,LOW);
     delayMicroseconds(2);
     
     digitalWrite(trigPin,HIGH);
     delayMicroseconds(10);
     
     digitalWrite(trigPin,LOW);
     duration = pulseIn(echoPin,HIGH);

     distance = duration/58.2 ;

    
    
     Serial.println(" ");
     Serial.print(distance);
     delay(3000);
     
     

}
