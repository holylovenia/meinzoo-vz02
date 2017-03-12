#ifndef OWL_H
#define OWL_H

#include "aves.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Owl : public Aves, public Carnivora, public BehaviorTame {
	public :
		Owl(int _weight);
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif