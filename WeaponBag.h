#ifndef WEAPONBAG_H
#define WEAPONBAG_H

#include "Weapon.h"

const int MAX_SIZE = 16;

class WeaponBag
{
    public:
        WeaponBag();

        void getInventory();

        void addWeapon(Weapon *w);
        bool removeWeapon(std::string nam);
        Weapon* removeAtIndex(int index);

        std::string showAtIndex(int index);

    protected:

    private:
        Weapon *bag[MAX_SIZE];
        int counter;

        bool checkFull();
};

#endif // WEAPONBAG_H
