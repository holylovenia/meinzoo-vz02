#ifndef MAMMALIA_H
#define MAMMALIA_H

#include "../animal.h"

class Mammalia: public Animal {
	public:
		// ctor
		Mammalia();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif