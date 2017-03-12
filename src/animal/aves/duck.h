#ifndef DUCK_H
#define DUCK_H

#include "aves.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Duck : public Aves, public Omnivora, public BehaviorTame {
	public :
		Duck(int _weight);
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif