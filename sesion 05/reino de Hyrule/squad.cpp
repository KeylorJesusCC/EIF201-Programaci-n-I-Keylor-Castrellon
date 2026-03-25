#include "Squad.h"
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace EIF201;
void Squad::expandCapacity()
{

}

Squad::Squad(std::string name, int initialCapacity)
{
	//oto
}

Squad::~Squad()
{
}


Warrior* Squad::recruit(std::string name, std::string cls, int atk, int def, int hp, int maxSkills)
{
	return nullptr;
}

bool Squad::totalPower() const
{
	return false;
}

void Squad::showSquad() const
{
}

int Squad::getCont() const
{
	return 0;
}

Warrior** Squad::getByClass(std::string cls, int& resultCount) const
{
	return nullptr;
}

void Squad::sortByPower()
{
}

std::string Squad::simulateBattle(const Squad& enemy) const
{
	return std::string();
}
