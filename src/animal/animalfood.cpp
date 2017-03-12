#include "animalfood.h"

int AnimalFood::totalReqMeat = 0;
int AnimalFood::totalReqPlant = 0;

void AnimalFood::AddTotalMeat(int reqMeat) {
	totalReqMeat += reqMeat;
}
void AnimalFood::AddTotalMeat(int reqPlant) {
	totalReqPlant += reqPlant;
}
int AnimalFood::getTotalMeat() {
	return totalReqMeat;
}
int AnimalFood::getTotalPlant() {
	return totalReqPlant;
}