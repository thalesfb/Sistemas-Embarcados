#include <HX711.h>

// Define connection pins:
#define btPin 13 // Pin connected to the button.
#define ledRed 8 // Pin connected to the red LED.
#define ledGreen 9 // Pin connected to the green LED.
#define ledYellow 10 // Pin connected to the yellow LED.
#define pinDT 2 // Pin connected to the DT pin of the load cell.
#define pinSCK 3 // Pin connected to the SCK pin of the load cell.
#define pinBuzzer 12 // Pin connected to the buzzer.
#define pinMotor 11 // Pin connected to the motor.

// Define variables:
int btState = 0; // Variable for reading out the state of the button.
float peso = 0.0f; // Variable for reading out the weight. 
float peso_ideial = 1.0f; // Variable for reading out the ideal weight.
float variacao = 3.00f; // Variable for reading out the variation.
int motor = 0; // Variable for reading out the state of the motor.
const int tempo = 1000; // Variable for setting the delay time.
float fator_calibracao = -45000;

HX711 scale;

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  // Configure the pins as input or output:
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(btPin, INPUT);
  pinMode(pinMotor, OUTPUT);

  scale.begin(pinDT, pinSCK); // Inicializa a balança
  float media_leitura = scale.read_average();
  Serial.print("Media de leituras com Celula sem carga: ");
  Serial.print(media_leitura);
  Serial.println();

  //scale.set_scale(escala); // Calibra a balança
  delay(100); // Aguarda 1s
  scale.tare(); // Zera a balança
  Serial.println("Setup completo");
}

void loop() {
  bool tipoBuzzer = 0;
  // Set the state of the button:
  btState = 0;
  // Set state of the motor:
  analogWrite(pinMotor, 0);
  //peso = 0.0f;
  // Set the scale:
  scale.set_scale(fator_calibracao);
  // Read out the state of button (btPin):
  btState = digitalRead(btPin);
  //Serial.print("btState: ");
  //Serial.println(btState);
  // If the button is pressed (btState = LOW), do the following:
  if (btState == 1) {
    //Serial.println("Botão pressionado");
    //scale.power_up();
    if (scale.is_ready()) {
      peso = scale.get_units();
    }
    if (peso < peso_ideial - (peso_ideial * variacao)) {
      Serial.println("Peso menor que o mínimo");
      digitalWrite(ledYellow, HIGH); // Turn on the on-board LED.
      digitalWrite(ledGreen, LOW); // Turn off the on-board LED.
      digitalWrite(pinBuzzer, LOW); // Turn off Buzzer.
      //digitalWrite(ledYellow, LOW); // Turn off the on-board LED.
      analogWrite(pinMotor, 255); // Turn on Motor.
    }
    else if (peso > peso_ideial + (peso_ideial * variacao)) {
      Serial.println("Peso maior que o máximo");
      digitalWrite(pinBuzzer, HIGH); // Turn on Buzzer.
      digitalWrite(ledGreen, LOW); // Turn off the on-board LED.
      digitalWrite(ledYellow, LOW); // Turn off the on-board LED.
      analogWrite(pinMotor, 0); // Turn off Motor.
    }
    else {
      Serial.println("Peso dentro da faixa");
      digitalWrite(ledYellow, LOW); // Turn off the on-board LED.
      digitalWrite(ledGreen, HIGH); // Turn off the on-board LED.
      digitalWrite(pinBuzzer, LOW); // Turn off Buzzer.
      analogWrite(pinMotor, 0); // Turn off Motor.
      //digitalWrite(ledPin3, LOW); // Turn on the on-board LED.
    }
    // Print the weight on the serial monitor:
    Serial.print("Peso: ");
    Serial.println(peso);
    delay(tempo); // Wait for 1 second.
    scale.power_down();
  }
  else {
    scale.power_up();
    //digitalWrite(ledGreen, LOW); // Turn off the on-board LED.
    //digitalWrite(ledYellow, LOW); // Turn off the on-board LED.
    //digitalWrite(pinBuzzer, LOW);
  }
}