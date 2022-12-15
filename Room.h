#pragma once
#include "Item.h"
#include "Monster.h"
#include <iostream>
class Room
{
private:
	std::string name;
	Item* items; // array
	Monster* monsters;
	Room* North;
	Room* South;
	Room* East;
	Room* West;
public:
	void addRoom(Room* room, int direction); // check if no room in the direction
};
std::ostream& operator << (std::ostream& out, const Room& room);
