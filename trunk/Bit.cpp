/*
 * Bit.cpp
 *
 *  Created on: Feb 16, 2009
 *      Author: James Johnson
 */

#include "Bit.h"

Bit::Bit() {
	// TODO Auto-generated constructor stub

}

Bit::~Bit() {
	// TODO Auto-generated destructor stub
}
void Bit::setbit(bool input){
	bit = input;


}
bool Bit::getbit(){
	return bit;
}
void Bit::operator = (bool b){
	bit = b;
}
void Bit::operator = (Bit b){
	bit = b.getbit();
}
void Bit::operator = (int i){
	if (i == 1 or i == 0 ){
		bit = i;
	}
	/*else{
		bit = NULL;
	}*/

}
