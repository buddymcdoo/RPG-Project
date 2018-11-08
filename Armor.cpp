#include "Armor.h"

using namespace iq;

Armor::Armor(int lvl, aType aTyp, std::string nam, int def, iq::rarity aRar = common){
    level = lvl;
    name = nam;
    defense = def;

    switch(aTyp){
    case legs:
        type = "Legs";
        break;
    case chest:
        type = "Chest";
        break;
    case shoulders:
        type = "Shoulders";
        break;
    case head:
        type = "Head";
        break;
    case feet:
        type = "Feet";
        break;
    case hands:
        type = "Hands";
        break;
    }

    switch(aRar){
    case common:
        rarity = "Common";
        break;
    case uncommon:
        rarity = "Uncommon";
        break;
    case rare:
        rarity = "Rare";
        break;
    case epic:
        rarity = "Epic";
        break;
    case legendary:
        rarity = "Legendary";
        break;
    }
}
