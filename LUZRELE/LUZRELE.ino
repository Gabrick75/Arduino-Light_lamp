#define LDR A0 //sensor de luz
#define RELE 4 // rele

int minimo = 4; //Luz minima para ligar o rele
int Leitura = 0; // Valor a ser lido pelo LDR

void setup() {
  // put your setup code here, to run once:
  pinMode(RELE, OUTPUT);
  pinMode(LDR, INPUT);
  
  Serial.begin(9600);

  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  Leitura = analogRead(LDR);
    Serial.println(Leitura);

    


    if(Leitura > 700){
      digitalWrite(RELE, LOW);
      
      
      }
    else digitalWrite(RELE, HIGH);


  delay(500);




}
