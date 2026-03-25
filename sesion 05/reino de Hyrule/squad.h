#ifndef SQUAD_H
#define SQUAD_H

#include "warrior.h"
#include<string>

namespace EIF201 {
	class Squad
	{
	private:

		std::string name;
		Warrior** wariors;
		int capacity;
		int count;
		void expandCapacity();
	public:
		Squad(std::string name, int initialCapacity = 3);
		~Squad();
		Warrior* recruit(std::string name, std::string cls, int atk, int def, int hp, int maxSkills);
		bool totalPower()const;
		void showSquad()const;
		int getCont() const;
		std::string getName()const;
		Warrior** getByClass(std::string cls, int& resultCount)const;
		void sortByPower();
		std::string simulateBattle(const Squad& enemy)const;

	};
}
#endif SQUAD_H
