#ifndef MONKEY_H
#define MONKEY_H

#include "mammalia.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Monkey: public Mammalia, public Omnivora, public BehaviorTame {
	public:
		Monkey(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif