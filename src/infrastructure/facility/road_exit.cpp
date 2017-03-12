#include "road_exit.h"


RoadExit::RoadExit(bool Accessible): Road(Accessible), defRoadExit(true) {
	isExit = defRoadExit;
}