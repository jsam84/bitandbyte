/*
 * Byte.cpp
 *
 *  Created on: Feb 16, 2009
 *      Author: James Johnson
 */

#include "Byte.h"

Byte::Byte() {
	// TODO Auto-generated constructor stub

}

Byte::~Byte() {
	// TODO Auto-generated destructor stub

}
void Byte::SetByte(bool bit[8]){
	int i;
	for(i=0; i<8; i++){
		byte[i] = bit[i];

	}

}
void Byte::SetByte(bool bit, int addr){

	byte[addr] = bit;
}
Bit Byte::GetByte(){
	Bit *ptr;
	ptr = &byte[8];

	return *ptr;
}
Bit Byte::GetByte(int addr){
	return byte[addr];
}

