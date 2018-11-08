/*
    This is our main character. Through this class, we operate our attacks,
    inventory, equipment, crafting, etc.. This class is the be-all, end-all
    of our game.
*/
#ifndef CHARACTER_H
#define CHARACTER_H

#include "Inventory.h"

class Character
{
    public:
        Character(ct::race r, ct::cls c);

    protected:

    private:
        Weapon *rightHand;
        Weapon *leftHand;

        Armor *feet;
        Armor *legs;
        Armor *hands;
        Armor *chest;
        Armor *shoulders;
        Armor *head;
        Armor **armor[6]; //This points to an armor pointer of each type (legs, chest, shoulders, head, feet, hands)

        Inventory backpack;


        ct::race myRace;
        ct::cls myClass;
        void setBaseStats(ct::race r, ct::cls c);

        int vitality;
        int dexterity;
        int strength;
        int intellect;
        int faith;
};

#endif // CHARACTER_H
