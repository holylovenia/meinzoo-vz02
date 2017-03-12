#ifndef CLOWNFISH_H
#define CLOWNFISH_H

#include "pisces.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

class Clownfish: public Pisces, public Omnivora, public BehaviorTame {
    public:
        Clownfish(int _weight);
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif