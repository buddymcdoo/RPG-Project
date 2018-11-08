#include "Character.h"

Character::Character(ct::race r, ct::cls c){
    myRace = r;
    myClass = c;
    setBaseStats(myRace, myClass);
}


using namespace ct;

void Character::setBaseStats(ct::race r, ct::cls c){
//Starting stats based on race
    switch(r){
    case human:
        vitality = 0;
        dexterity = 0;
        strength = 0;
        intellect = 0;
        faith = 0;
        break;
    case dwarf:
        vitality = 0;
        dexterity = 0;
        strength = 0;
        intellect = 0;
        faith = 0;
        break;
    case elf:
        vitality = 0;
        dexterity = 0;
        strength = 0;
        intellect = 0;
        faith = 0;
        break;
    case orc:
        vitality = 0;
        dexterity = 0;
        strength = 0;
        intellect = 0;
        faith = 0;
        break;
    case goblin:
        vitality = 0;
        dexterity = 0;
        strength = 0;
        intellect = 0;
        faith = 0;
        break;
    }
//Stat additions based on class
    switch(c){
    case fighter:
        vitality += 0;
        dexterity += 0;
        strength += 0;
        intellect += 0;
        faith += 0;
        break;
    case mage:
        vitality += 0;
        dexterity += 0;
        strength += 0;
        intellect += 0;
        faith += 0;
        break;
    case rogue:
        vitality += 0;
        dexterity += 0;
        strength += 0;
        intellect += 0;
        faith += 0;
        break;
    case cleric:
        vitality += 0;
        dexterity += 0;
        strength += 0;
        intellect += 0;
        faith += 0;
        break;
    case ranger:
        vitality += 0;
        dexterity += 0;
        strength += 0;
        intellect += 0;
        faith += 0;
        break;
    }
}
