#include "Weapon.h"

using namespace iq;

Weapon::Weapon(int lvl, wType wTyp, std::string nam, int minD, int maxD, iq::rarity wRar = common){
    level = lvl;
    name = nam;
    minDam = minD;
    maxDam = maxD;

    switch(wTyp){
    case sword:
        type = "Sword";
        break;
    case axe:
        type = "Axe";
        break;
    case mace:
        type = "Mace";
        break;
    case staff:
        type = "Staff";
        break;
    case dagger:
        type = "Dagger";
        break;
    case bow:
        type = "Bow";
        break;
    case gun:
        type = "Gun";
        break;
    case thrown:
        type = "Thrown";
        break;
    }

    switch(wRar){
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
