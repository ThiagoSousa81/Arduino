// https://www.tinkercad.com/things/97GWQ0e3hPe-fantabulous-elzing-habbi/editel?sharecode=NjRdUb_qiSsOWwX-fTIpp4wCtbEhWgGdXmVWD0ErQCQ
// Efeito de fogo com LEDs
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}
void loop() {
analogWrite(ledPin1, random(120)+136);
analogWrite(ledPin2, random(120)+136);
analogWrite(ledPin3, random(120)+136);
delay(random(100));
}
