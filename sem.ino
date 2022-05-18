//declarar as variáveis
int ledVerde= 8;
int ledAmarelo= 9;
int ledVermelho= 10;
int ledLaranja= 11;

void setup()//executa apenas 1 vez quando o arduíno é ligado
{
  pinMode(ledVerde,OUTPUT);  //define o pino 8 como saída
}

void loop() //é executado enquanto o arduino estiver ligado
{
  //Controle do led verde
  digitalWrite(ledVerde,HIGH); //acende o led
   delay(4000);          //espera 4 segundos
  digitalWrite(ledVerde,LOW);  //apaga o led !!!!!!!!!!!!!!!

  //Controle do led vermelho
  digitalWrite(ledVermelho,HIGH); //acende o led
   delay(4000);          //espera 4 segundos
  digitalWrite(ledVermelho,LOW);  //apaga o led !!!!!!!!!!!!!!!

  //Controle do led vermelho
  digitalWrite(ledLaranja,HIGH); //acende o led
   delay(4000);          //espera 4 segundos
  digitalWrite(ledLaranja,LOW);  //apaga o led !!!!!!!!!!!!!!!
}
