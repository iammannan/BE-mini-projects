
 
int misc2 = 13;
int misc1 = 12;
int cfl = 11;
int tb = 10;
int fan = 9;
int state;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(misc2, OUTPUT);   
  pinMode(misc1, OUTPUT);
  pinMode(cfl, OUTPUT);
  pinMode(tb, OUTPUT);
  pinMode(fan, OUTPUT);
        
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){     
      state = Serial.read();}

  if (state == '0') {
      digitalWrite(fan, HIGH);}  
      
  if (state == '1') {
      digitalWrite(fan, LOW);} 

  if (state == '2') {
      digitalWrite(tb, HIGH);} 

  if (state == '3') {
      digitalWrite(tb, LOW);} 

  if (state == '4') {
      digitalWrite(cfl, HIGH);} 

  if (state == '5') {
      digitalWrite(cfl, LOW);} 
      
  if (state == '6') {
      digitalWrite(misc1, HIGH);} 

  if (state == '7') {
      digitalWrite(misc1, LOW);}

  if (state == '8') {
      digitalWrite(misc2, HIGH);} 
      
  else if (state == '9') {
      digitalWrite(misc2, LOW);}   
      
  delay(100);               // wait for 100ms
  
  //For debugging purpose
  //Serial.println(state);
}
