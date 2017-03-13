#ifndef ANIMALFOOD_H
#define ANIMALFOOD_H

class AnimalFood {
	public:
		static void AddTotalMeat(int req_meat);
		static void AddTotalPlant(int req_plant);
		static int GetTotalMeat();
		static int GetTotalPlant();

	protected:
		static int total_req_meat;
		static int total_req_plant;
};

#endif