#include "Arduino.h"
#include "HDMI-Display.h"

const uint8_t PROGMEM EDID::eepromdata[128] =
{
#if DISPLAY_TYPE ==  DISPLAY_480x272 //480x272 (TFT043-3)
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x5C,0x34,0x01,0x00,0x01,0x00,0x00,0x00,
  0x01,0x19,0x01,0x03,0x81,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0xC4,0x09,0xE0,0x33,0x10,0x10,0x14,0x10,0x08,0x05,
  0x4A,0x00,0xE0,0x10,0x11,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x48,0x44,0x4D,
  0x49,0x20,0x44,0x49,0x53,0x50,0x4C,0x41,0x59,0x0A,0x00,0x00,0x00,0x10,0x00,0x01,
  0x00,0x0A,0x00,0x0A,0x00,0x0A,0x0A,0x0A,0x0A,0x0A,0x20,0x0A,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38

#elif DISPLAY_TYPE == DISPLAY_800x480 //800x480 (TFT050-3, HY5-LCD-HD, TFT070-4, HY7-LCD)
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x5C,0x34,0x01,0x00,0x01,0x00,0x00,0x00,
  0x01,0x19,0x01,0x03,0x80,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x1C,0x0C,0x20,0x80,0x30,0xE0,0x2D,0x10,0x28,0x30,
  0xD3,0x00,0x20,0xE0,0x31,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x48,0x44,0x4D,
  0x49,0x20,0x44,0x49,0x53,0x50,0x4C,0x41,0x59,0x0A,0x00,0x00,0x00,0x10,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB5

#elif DISPLAY_TYPE == DISPLAY_800x480_720x480 //800x480 (TFT050-3, HY5-LCD-HD, TFT070-4, HY7-LCD) with 720x480 (480p) fallback
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x5C,0x34,0x01,0x00,0x01,0x00,0x00,0x00,
  0x01,0x19,0x01,0x03,0x80,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x1C,0x0C,0x20,0x80,0x30,0xE0,0x2D,0x10,0x28,0x30,
  0xD3,0x00,0x20,0xE0,0x31,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x48,0x44,0x4D,
  0x49,0x20,0x44,0x49,0x53,0x50,0x4C,0x41,0x59,0x0A,0x8C,0x0A,0xD0,0x6C,0x20,0xE0,
  0x1E,0x10,0x10,0x3E,0x96,0x00,0xD0,0xE0,0x21,0x00,0x00,0x18,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8

#elif DISPLAY_TYPE == DISPLAY_800x480HY //800x480 display (HY070CTP, HY070CTP-A)
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x5C,0x34,0x01,0x00,0x01,0x00,0x00,0x00,
  0x01,0x19,0x01,0x03,0x80,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0xAA,0x0A,0x20,0x42,0x30,0xE0,0x2C,0x10,0x10,0x0A,
  0x51,0x04,0x20,0xE0,0x31,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x48,0x44,0x4D,
  0x49,0x20,0x44,0x49,0x53,0x50,0x4C,0x41,0x59,0x0A,0x00,0x00,0x00,0x10,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24

#elif DISPLAY_TYPE == DISPLAY_1024x600 //1024x600 display (HY070CTP-HD, HY101CTP)
  0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x5C,0x34,0x01,0x00,0x01,0x00,0x00,0x00,
  0x01,0x19,0x01,0x03,0x80,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0xEC,0x13,0x00,0x80,0x40,0x58,0x2D,0x20,0x28,0x30,
  0xD3,0x00,0x00,0x58,0x42,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x48,0x44,0x4D,
  0x49,0x20,0x44,0x49,0x53,0x50,0x4C,0x41,0x59,0x0A,0x00,0x00,0x00,0x10,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFD

#else
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF

#endif
};

EDID::EDID()
{
}

uint8_t EDID::readByte(uint8_t addr)
{
  uint8_t data = 0xFF;

  if(twi.beginTransmission(EEPROM_ADDR) == false)
  {
    twi.write(addr);
    twi.endTransmission();
    twi.requestFrom(EEPROM_ADDR, 1);
    for(unsigned long ms = millis(); !twi.available();)
    {
      if((millis()-ms) >= 500) // 500ms timeout
        break;
    }
    data = twi.read();
  }

  return data;
}

void EDID::writeByte(uint8_t addr, uint8_t data)
{
  if(twi.beginTransmission(EEPROM_ADDR) == false)
  {
    twi.write(addr);
    twi.write(data);
    twi.endTransmission();
  }
}

bool EDID::writeData(uint8_t *eepromdata, uint8_t length, bool fromProgMem)
{
  bool err = true;

  digitalWrite(LED_2, HIGH);
  #if DEBUG > 0
    Serial.println(F("EDID: writing..."));
  #endif
  for(uint16_t addr = 0; addr < EEPROM_SIZE; addr++)
  {
    uint8_t b;

    if(addr < length)
    {
      if(fromProgMem)
        b = pgm_read_byte(eepromdata + addr);
      else
        b = eepromdata[addr];
    }
    else
    {
      b = 0xFF;
    }

    writeByte((uint8_t)addr, b);
    delay(5);
  }
  #if DEBUG > 0
    Serial.println(F("EDID: verifying..."));
  #endif
  for(uint16_t addr = 0; addr < EEPROM_SIZE; addr++)
  {
    uint8_t b, d;

    if(addr < length)
    {
      if(fromProgMem)
        b = pgm_read_byte(eepromdata + addr);
      else
        b = eepromdata[addr];
    }
    else
    {
      b = 0xFF;
    }

    d = readByte((uint8_t)addr);

    if(b != d)
    {
      #if DEBUG > 0
        Serial.print(F("EDID: verification failed at 0x"));
        Serial.println(addr, HEX);
      #endif
      err = false;
      break;
    }
  }
  digitalWrite(LED_2, LOW);

  return err;
}

bool EDID::writeEDID()
{
  return writeData((uint8_t*)eepromdata, sizeof(eepromdata), true);
}

/*
bool EDID::writeFromRam() // test
{
  char test[] = "0123456789";
  return writeData((uint8_t*)test, sizeof(test), false);
}
*/
