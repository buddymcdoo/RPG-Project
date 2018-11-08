/*
    This class is the characters complete inventory. It works based around
    other smaller inventory classes (see "MaterialBag.h", "ArmorBag.h", etc.).
    Through this class, we can add and remove items, view all our items, etc..
*/
#ifndef INVENTORY_H
#define INVENTORY_H

#include "ArmorBag.h"
#include "WeaponBag.h"
#include "MaterialBag.h"

class Inventory
{
    public:
        Inventory();

        void addItem(Weapon *w);
        void addItem(Armor *a);
        void addItem(Material *m);
        void removeItem(std::string name);
        template <typename T>
        T* removeByIndex(int index, std::string bagType); //This searches out an index in a certain bag, removes the item, and returns it

        void getInventory();

    protected:

    private:
        WeaponBag wBag;
        ArmorBag aBag;
        MaterialBag mBag;
};

#endif // INVENTORY_H
