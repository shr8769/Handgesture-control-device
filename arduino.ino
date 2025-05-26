int trigPin1 = 6, echoPin1 = 7;  
int trigPin2 = 8, echoPin2 = 9;  
int pirPin = 10;                  
long duration1, cm1, duration2, cm2;
int last = LOW;           

void setup() {
    Serial.begin(9600);
    pinMode(trigPin1, OUTPUT); pinMode(echoPin1, INPUT);
    pinMode(trigPin2, OUTPUT); pinMode(echoPin2, INPUT);
    pinMode(pirPin, INPUT);      
}

void loop() {
    // Read Sensor 1
    digitalWrite(trigPin1, LOW); delayMicroseconds(5);
    digitalWrite(trigPin1, HIGH); delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);
    duration1 = pulseIn(echoPin1, HIGH);
    cm1 = (duration1 / 2) / 29.1;
    
    // Read Sensor 2
    digitalWrite(trigPin2, LOW); delayMicroseconds(5);
    digitalWrite(trigPin2, HIGH); delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    cm2 = (duration2 / 2) / 29.1;
    
    
    int pirState = digitalRead(pirPin);
    
    if (pirState != last) {
        if(pirState == HIGH) {
          
    Serial.println("Play/Pause");
              delay(500); 
        }
        last = pirState;
    }

    if(cm1 <= 20 && cm2 <= 20) {
        
        Serial.println("ArrowDown");
    delay(300);
    }
    
    if (cm1 >= 20 && cm1 <= 50 && cm2 >= 20 && cm2 <= 50) {
        
        Serial.println("ArrowUp");
          delay(300);
    }
    
    if (cm1 <= 10 && cm2 >= 30) {
        Serial.println("back");
        delay(300);
    }
    
    if (cm1 >= 30 && cm2 <= 10) {
        Serial.println("next");
        delay(300);
    }
    
    delay(200); 
}
