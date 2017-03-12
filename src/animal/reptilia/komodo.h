#ifndef KOMODO_H
#define KOMODO_H

#include "reptilia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Komodo : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		Komodo(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif