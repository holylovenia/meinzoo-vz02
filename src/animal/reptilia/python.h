#ifndef PYTHON_H
#define PYTHON_H

#include "reptilia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Python : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		Python(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif