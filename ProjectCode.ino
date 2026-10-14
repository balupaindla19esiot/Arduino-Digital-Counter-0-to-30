
int tens[4] = {2, 3, 4, 5};
int units[4] = {6, 7, 8, 9};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(tens[i], OUTPUT);
    pinMode(units[i], OUTPUT);
  }
}

void display(int pins[], int digit) {
  digitalWrite(pins[0], digit & 1);
  digitalWrite(pins[1], (digit >> 1) & 1);
  digitalWrite(pins[2], (digit >> 2) & 1);
  digitalWrite(pins[3], (digit >> 3) & 1);
}

void loop() {
  int count;

  for (count = 0; count <= 30; count++) {
    display(tens, count / 10);
    display(units, count % 10);
    delay(600);
  }
}
