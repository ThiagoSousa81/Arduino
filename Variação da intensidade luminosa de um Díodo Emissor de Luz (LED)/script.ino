// Veja o projeto completo no link abaixo
// https://www.tinkercad.com/things/3htupNgGCUm-smooth-amur-bigery/editel?sharecode=JdIxHxNPO9zG2N-0lV9Of2Sz2OIFLcFryd9y3IDX4zg


int luminosidade = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (luminosidade = 0; luminosidade <= 255; luminosidade += 5) {
    analogWrite(9, luminosidade);
    delay(30); // Esperando 30 milisegundos (também na linha 20)
  }
  for (luminosidade = 255; luminosidade >= 0; luminosidade -= 5) {
    analogWrite(9, luminosidade);
    delay(30); 
  }
}