#ifndef AVES_H
#define AVES_H

#include "../animal.h"

class Aves: public Animal {
	public:
		// ctor
		Aves();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif