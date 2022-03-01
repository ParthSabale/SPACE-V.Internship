//DRIVE CODE of SPACE Robochip
const int r1=1, r2=2, l1=3, l2=4; 
const int LS = 6;
const int RS = 5; 
int L,R;

void setup()

{

 pinMode(LS, INPUT); 
 pinMode(RS, INPUT);
 pinMode(r1, OUTPUT); 
 pinMode(r2, OUTPUT);
 pinMode(l1, OUTPUT);
 pinMode(l2, OUTPUT);
 digitalWrite(r2,LOW); 
 digitalWrite(l2,LOW);
}

void loop()

{

 L = digitalRead(LS);
 R = digitalRead(RS);
 digitalWrite(r1, !R);
 digitalWrite(l1, !L);
}
