#ifndef SHARK_H
#define SHARK_H

#include "pisces.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Shark: public Pisces, public Carnivora, public BehaviorTame {
    public:
        Shark(int _weight);
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif