#ifndef ROAD_H
#define ROAD_H

#include "facility.h"

class Road: public Facility {
	public:
		// ctor
		Road();
		// ctor with parameter
		Road(bool _entrance, bool _exit);
		// cctor
		Road(Road& R);
		// operator=
		Road& operator=(Road& R);
		// dtor
		~Road();

		bool getIsEntrance();
		bool getIsExit();

	protected:
		string facilityType = "Road";
		bool isEntrance;
		bool isExit;

	private:
		const bool defIsEntrance = false;
		const bool defIsExit = false;
};


#endif
