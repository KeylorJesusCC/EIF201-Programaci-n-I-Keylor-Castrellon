#include "Warrior.h"
#include <sstream>
#include <iostream>

using namespace EIF201;

int Warrior::clampRange(int value, int mn, int mx) {
    if (value < mn) return mn;
    if (value > mx) return mx;
    return value;
}

bool Warrior::isValidClass(std::string cls) {
    return cls == "Tank" || cls == "Assassin"
        || cls == "Mage" || cls == "Support";
}

Warrior::Warrior(std::string name, std::string combatClass,
    int attack, int defense, int health,
    int maxSkills)
    : name(name.empty() ? "Unknown" : name),
    combatClass(isValidClass(combatClass) ? combatClass : "Support"),
    attack(clampRange(attack, 1, 100)),
    defense(clampRange(defense, 1, 100)),
    health(clampRange(health, 1, 1000)),
    skillCount(0),
    maxSkills(maxSkills > 0 ? maxSkills : 3) {

    //completar
   
}

Warrior::~Warrior() {
    //completar
}

bool Warrior::learnSkill(std::string name, std::string type, int power, int cost) {

    //completar 
    return false;
}

bool Warrior::hasSkill(std::string name) const {
    for (int i = 0; i < skillCount; i++) {
        if (skills[i]->getName() == name)
            return true;
    }
    return false;
}

int Warrior::totalSkillEffect() const {
    int sum = 0;
    for (int i = 0; i < skillCount; i++)
        sum += skills[i]->calculateEffect();
    return sum;
}

int Warrior::calculatePower() const {
    //completar
    return 0;
}

std::string Warrior::getName() const { return name; }
std::string Warrior::getCombatClass() const { return combatClass; }
int Warrior::getAttack() const { return attack; }
int Warrior::getDefense() const { return defense; }
int Warrior::getHealth() const { return health; }
int Warrior::getSkillCount() const { return skillCount; }

std::string Warrior::toString() const {
    std::ostringstream oss;
    oss << "[" << combatClass << "] " << name
        << " | ATK:" << attack << " DEF:" << defense
        << " HP:" << health << " | Skills:"
        << skillCount << "/" << maxSkills
        << " | Power:" << calculatePower();
    return oss.str();
}

void Warrior::showSkills() const {
    std::cout << "    Skills of " << name << ":" << std::endl;
    for (int i = 0; i < skillCount; i++) {
        std::cout << "      - " << skills[i]->toString() << std::endl;
    }
}

