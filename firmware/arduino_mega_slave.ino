// Full PN532 I2C NFC reader code
#include <Wire.h>
#include <PN532_I2C.h>
#include <NfcAdapter.h>

PN532_I2C pn532i2c(Wire);
NfcAdapter nfc(pn532i2c);

void setup() {
  Serial.begin(115200);
  nfc.begin();
  Serial.println("NFC reader ready.");
}

void loop() {
  if (nfc.tagPresent()) {
    NfcTag tag = nfc.read();
    Serial.println("Tag detected: " + tag.getUidString());
  }
  delay(1000);
}