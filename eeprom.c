#include "eeprom.h"

void eepromWriteObj(word addr, void *obj, byte size) {
  byte i, *ptr = (byte *)obj;
  for (i = 0; i < size; i++) eeprom_write(addr++, *(ptr++));
  return;
}

void eepromReadObj(word addr, void *obj, byte size) {
  byte i, *ptr = (byte *)obj;
  for (i = 0; i < size; i++) *(ptr++) = eeprom_read(addr++);
  return;
}
