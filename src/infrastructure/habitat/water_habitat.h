#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

class WaterHabitat {
	public:
		// ctor
		WaterHabitat();

	protected:
		char type;
		bool isAccessible;

	private:
		const char defType;
};

#endif