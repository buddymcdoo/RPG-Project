#ifndef ARMORBAG_H
#define ARMORBAG_H

#include "Armor.h"

const int MAX_SIZE_B = 16;

class ArmorBag
{
    public:
        ArmorBag();

        void getInventory();

        void addArmor(Armor *a);
        bool removeArmor(std::string nam);
        Armor* removeAtIndex(int index);

        std::string showAtIndex(int index);

    protected:

    private:
        Armor *bag[MAX_SIZE_B];
        int counter;

        bool checkFull();
};

#endif // ARMORBAG_H
