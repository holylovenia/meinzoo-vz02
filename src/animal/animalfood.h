#ifndef ANIMALFOOD_H
#define ANIMALFOOD_H

class AnimalFood {
	public:
		static void AddTotalMeat(int reqMeat);
		static void AddTotalPlant(int reqPlant);
		static int getTotalMeat();
		static int getTotalPlant();

	protected:
		static int totalReqMeat;
		static int totalReqPlant;
};

#endif