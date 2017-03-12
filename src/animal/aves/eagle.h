#ifndef EAGLE_H
#define EAGLE_H

#include "aves.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Eagle : public Aves, public Carnivora, public BehaviorTame {
	public :
		Eagle(int _weight);
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif