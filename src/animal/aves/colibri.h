#ifndef COLIBRI_H
#define COLIBRI_H

#include "aves.h"
#include "../diet/herbivora.h"
#include "../behavior/behavior_tame.h"

class Colibri : public Aves, public Herbivora, public BehaviorTame {
	public :
		Colibri(int _weight);
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif