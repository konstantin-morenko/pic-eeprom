#include <xc.h>

typedef unsigned char byte;
typedef unsigned char word;

void eepromReadObj(word addr, void *obj, byte size);
void eepromWriteObj(word addr, void *obj, byte size);
