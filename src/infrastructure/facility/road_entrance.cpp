#include "road_entrance.h"


RoadEntrance::RoadEntrance(bool Accessible): Road(Accessible), defRoadEntrance(true) {
	isEntrance = defRoadEntrance;
}