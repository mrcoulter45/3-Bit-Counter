void setup() {
    pinMode(2, OUTPUT);//clk
    pinMode(3, OUTPUT);//D1
    pinMode(4, OUTPUT);//D2
}

void loop() {
    while (1) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        delay(500);
        digitalWrite(2, 1);
        delay(500);
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        delay(500);
        digitalWrite(2, 1);
        delay(500);
    }
}
