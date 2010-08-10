/*
 * Bit.h
 *
 *  Created on: Feb 16, 2009
 *      Author: James Johnson
 */

#ifndef BIT_H_
#define BIT_H_



class Bit {

private:
	bool bit;

public:
	Bit();
	virtual ~Bit();
	void setbit(bool input);
	bool getbit();
	void operator = (bool b);
	void operator = (Bit b);
	void operator = (int i);

 //think about creating an overidden compare

};

#endif /* BIT_H_ */
