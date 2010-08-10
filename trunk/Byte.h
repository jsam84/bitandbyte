/*
 * Byte.h
 *
 *  Created on: Feb 16, 2009
 *      Author: James Johnson
 */

#ifndef BYTE_H_
#define BYTE_H_


#include "Bit.h"

class Byte {

private:
	Bit byte[8];

public:
	Byte();
	virtual ~Byte();
	void SetByte(bool bit[8]);
	void SetByte(bool bit, int addr);
	Bit GetByte();
	Bit GetByte(int addr);

	//I need to return both an 8 char string and a searialized bit by bit plus a certian bit also do the same in reverse to set
//think about an overidden compare

};

#endif /* BYTE_H_ */
