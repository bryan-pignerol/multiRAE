int pot; // création de la variable du potentiomètre

void setup() {

Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:

pot = analogRead(A0); // lire la valeur numérique du potentiomètre
Serial.println(pot); // affiche la valeur du potentiomètre sur le moniteur série 
delay(1000);
}
