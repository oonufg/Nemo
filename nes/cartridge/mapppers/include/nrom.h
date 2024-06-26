#ifndef NROM_H
#define NROM_H
#include "mapper.h"

class NROMMapper {
private:
	Cartridge* cartridge;
	Byte* chrRam;
	bool isUseOneBank;
	bool isUseChrRam;
public:
	NROMMapper(Cartridge* cartridge);
	void writePrg(Address address, Byte value);
	Byte readPrg(Address address);

	void writeChr(Address address, Byte value);
	Byte readChr(Address address);
	
};


#endif