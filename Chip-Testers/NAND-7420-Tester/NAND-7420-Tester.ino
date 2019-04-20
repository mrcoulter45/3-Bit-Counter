void setup() {
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    for (uint8_t i = 0; i < 16; i += 1) {
        digitalWrite(2, (i & 1));
        digitalWrite(3, (i & 2) >> 1);
        digitalWrite(4, (i & 4) >> 2);
        digitalWrite(5, (i & 8) >> 3);
        digitalWrite(6, (i & 1));
        digitalWrite(7, (i & 2) >> 1);
        digitalWrite(8, (i & 4) >> 2);
        digitalWrite(9, (i & 8) >> 3);
        Serial.println(i);
        delay(300);
    }
}
