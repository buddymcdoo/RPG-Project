#ifndef ARMOR_H
#define ARMOR_H

#include "GlobalEnums.h"

#include <string>

class Armor
{
    public:
        Armor(int lvl, iq::aType aTyp, std::string nam, int def, iq::rarity aRar);

        int getLevel() { return level; }
        std::string getType(){ return type; }
        std::string getName() { return name; }
        int getDefense(){ return defense; }
        std::string getRarity(){ return rarity; }

    protected:

    private:
        int level;
        std::string type;
        std::string name;
        int defense;
        std::string rarity;
};

#endif // ARMOR_H
