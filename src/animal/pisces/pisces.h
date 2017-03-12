#ifndef PISCES_H
#define PISCES_H

#include "../animal.h"

class Pisces: public Animal {
	public:
		// ctor
		Pisces();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif