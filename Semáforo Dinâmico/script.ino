//https://www.tinkercad.com/things/1LmPzHRNJnX-spectacular-migelo-vihelmo/editel?sharecode=ZOuj3K9jH7GgtcRxwYJit_06wOeo80camigDJfx8HEo

int carRed = 12; // estabelece o semáforo para carros
int carYellow = 11;
int carGreen = 10;
int pedRed = 9; // estabelece o semáforo para pedestres
int pedGreen = 8;
int button = 2; // pino do botão
int crossTime = 5000; // tempo para que os pedestres atravessem
unsigned long changeTime; // tempo desde que o botão foi pressionado
void setup() {
pinMode(carRed, OUTPUT);
pinMode(carYellow, OUTPUT);
pinMode(carGreen, OUTPUT);
pinMode(pedRed, OUTPUT);
pinMode(pedGreen, OUTPUT);
pinMode(button, INPUT); // botão no pino 2
// acende a luz verde
digitalWrite(carGreen, HIGH);
digitalWrite(pedRed, HIGH);
}
void loop() {
int state = digitalRead(button);
/* verifica se o botão foi pressionado e se transcorreram 5 segundos desde a última vez que
isso ocorreu */
if (state == HIGH && (millis() - changeTime) > 5000) {
  // Chama a função para alterar as luzes
changeLights();
}
}
void changeLights() {
digitalWrite(carGreen, LOW); // apaga o verde
digitalWrite(carYellow, HIGH); // acende o amarelo
delay(2000); // espera 2 segundos
digitalWrite(carYellow, LOW); // apaga o amarelo
digitalWrite(carRed, HIGH); // acende o vermelho
delay(1000); // espera 1 segundo, por segurança
digitalWrite(pedRed, LOW); // apaga o vermelho dos pedestres
digitalWrite(pedGreen, HIGH); // acende o verde dos pedestres
delay(crossTime); // espera por um intervalo de tempo predefinido
// pisca o verde dos pedestres
for (int x=0; x<10; x++) {
digitalWrite(pedGreen, HIGH);
delay(250);
digitalWrite(pedGreen, LOW);
delay(250);
}
// acende o vermelho dos pedestres
digitalWrite(pedRed, HIGH);
delay(500);
digitalWrite(carYellow, HIGH); // acende o amarelo
digitalWrite(carRed, LOW); // apaga o vermelho
delay(1000);
digitalWrite(carGreen, HIGH); // acende o verde
digitalWrite(carYellow, LOW); // apaga o amarelo
// registra o tempo desde a última alteração no semáforo
changeTime = millis();
// depois retorna para o loop principal do programa
}
