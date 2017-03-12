#ifndef HABITAT_H
#define HABITAT_H

#include "cell.h"

class Habitat: public Cell {
	public:
		Habitat(int _x, int _y, bool isAccessible);
		
	protected:
		char type;
};

#endif
