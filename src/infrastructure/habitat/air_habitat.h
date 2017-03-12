#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

class AirHabitat {
	public:
		// ctor
		AirHabitat();

	protected:
		char type;
		bool isAccessible;
		
	private:
		const bool defAccessible;
		const char defType;
};

#endif
