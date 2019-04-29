// setup() s'éxecute une seule fois au démarrage //
int LED = 2;
int valeurCapteur;
int capteur = 0;
int seuil = 200;


void setup()
{
 // initiation la LED comme un OUTPUT sur le pin 2 //
  pinMode (LED, OUTPUT);// initialiser la sortie 2 en tant qu'output //
  Serial.begin(9600); // on connecte au moniteur série pour ensuite y lire les valeurs de notre capteurs //
  
}

// loop() s'éxécute en boucle //

 void loop(){
 
  
 valeurCapteur = analogRead(capteur);// lis le capteur et assigne les valeurs du capteurs a la variable valeurCapteur//
 
 Serial.println(valeurCapteur);// imprimer la valeur sur le moniteur série //
 
 if              (valeurCapteur>seuil)
 {// si la valeur du capteur est supérieure au seuil (500),,//
 digitalWrite(LED, HIGH);// alors allume la led //
 delay(30);
 }
 else{// sinon si la valeur capteur est inférieure au seuil
  digitalWrite(LED, LOW);// cette fonction éteind la led low correspond au voltage bas// alors eteins la LED//
  delay(30);
 }
 
 }
