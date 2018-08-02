//receiver
String msg1= "";

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
 }

void loop() { // run over and over
  while(Serial.available() > 0){
    char msg = (char)Serial.read();
    if (msg == '/n'){
      String Data = msg1;
      Serial.println(Data); 
      }
    else{
      msg1.concat(msg);
      }
  }
}
