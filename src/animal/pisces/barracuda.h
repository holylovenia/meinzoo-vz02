#ifndef BARRACUDA_H
#define BARRACUDA_H

#include "pisces.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

class Barracuda: public Pisces, public Carnivora, public BehaviorTame {
    public:
        Barracuda(int _weight);
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif