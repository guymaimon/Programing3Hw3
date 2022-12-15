#pragma once
#include "Room.h"
#include <string>
class Map
{
private:
	std::string name;
	Room* rooms;
	int numberOfRooms;
public:
	Map(std::string _name = "", int _numberOfRooms = 10);
	Map& operator=(const Map& map);
};

