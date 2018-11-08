#ifndef WEAPON_H
#define WEAPON_H

#include "GlobalEnums.h"

#include <string>

class Weapon
{
    public:
        Weapon(int lvl, iq::wType wTyp, std::string nam, int minD, int maxD, iq::rarity wRar);

        int getLevel() { return level; }
        std::string getType(){ return type; }
        std::string getName() { return name; }
        int getMinDam() { return minDam; }
        int getMaxDam() { return maxDam; }
        std::string getRarity(){ return rarity; }

    protected:

    private:
        int level;
        std::string type;
        std::string name;
        int minDam;
        int maxDam;
        std::string rarity;
};

#endif // WEAPON_H
