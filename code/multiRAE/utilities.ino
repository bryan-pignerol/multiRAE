// DISPLAY FUNC
void lcdReversePrint(Adafruit_PCD8544 &lcdDisplay, String &str, int col, int row) {
  for (int i = str.length() - 1; i > -1; i--) {
    lcdDisplay.drawChar(col - (str.length() - 1 - i) * 6, row, str[i], 255, 0, 1, 1);
  }
}

void lcdErase(Adafruit_PCD8544 &lcdDisplay, int col, int row, int numChar) {
  for (int i = 0; i < numChar; i++) {
    lcdDisplay.drawChar(col + 6 * i, row, ' ', 255, 0, 1, 1);
  }
}

void refreshVariables() {
  lcdReversePrint(nokiaDisplay, ph3, 19, 8);
  lcdReversePrint(nokiaDisplay, oxy, 62, 8);
  lcdReversePrint(nokiaDisplay, cl2, 19, 24);
  lcdReversePrint(nokiaDisplay, hcn, 62, 24);
  lcdReversePrint(nokiaDisplay, lie, 19, 40);
  lcdReversePrint(nokiaDisplay, voc, 62, 40);
  nokiaDisplay.display();
  delay(1000);
  lcdErase(nokiaDisplay, 1, 8, 4);
  lcdErase(nokiaDisplay, 55, 8, 2);
  lcdErase(nokiaDisplay, 1, 24, 4);
  lcdErase(nokiaDisplay, 44, 24, 4);
  lcdErase(nokiaDisplay, 6, 40, 3);
  lcdErase(nokiaDisplay, 44, 40, 4);
  nokiaDisplay.display();
  delay(1000);  // delay à retirer à l'avenir
}


// BUZZER FUNC
void buzz(float freq) {
  tone(buzzer, 500, 500);
  delay((1 / freq) * 1000);
}

// XBEE FUNC
