#ifndef REPTILIA_H
#define REPTILIA_H

#include "../animal.h"

class Reptilia: public Animal {
	public:
		// ctor
		Reptilia();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif
