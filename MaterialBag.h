#ifndef MATERIALBAG_H
#define MATERIALBAG_H

#include "Material.h"

const int MAX_SIZE_C = 16;

class MaterialBag
{
    public:
        MaterialBag();

        void getInventory();

        void addMaterial(Material *m);
        bool removeMaterial(std::string nam);
        Material* removeAtIndex(int index);

        std::string showAtIndex(int index);

    protected:

    private:
        Material *bag[MAX_SIZE_C];
        int counter;

        bool checkFull();
};

#endif // MATERIALBAG_H
