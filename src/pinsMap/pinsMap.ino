const byte pin_number[] = {PD_3, PD_6, PC_7, PC_6, PC_5, PC_4, PB_3, PD_1, PD_2};
const String pin_name[] = {"PD_3", "PD_6", "PC_7", "PC_6", "PC_5", "PC_4", "PB_3", "PD_1", "PD_2"};

void setup() {
  //  Serial.begin(57600);
  //  pinMode(RED_LED, OUTPUT);

  //  digitalWrite(RED_LED, HIGH);
  //  while (!Serial);
  //  digitalWrite(RED_LED, LOW);

  //  Serial.println("----------");
  //  for (byte i = 0; i < 9; ++i) {
  //    Serial.print(i + 1);
  //    Serial.print(") " + pin_name[i] + ": ");
  //    Serial.println(pin_number[i]);
  //  }

  for (byte i = 0; i < 9; ++i) {
    pinMode(pin_number[i], OUTPUT);
  }
}


void loop() {
  for (byte i = 0; i < 9; ++i) {
    digitalWrite(pin_number[i], !digitalRead(pin_number[i]));
    delay(50);
  }
  while(1);
}
