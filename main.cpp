#include <iostream>

#include "Inventory.h"

using namespace std;

int main()
{

    Weapon aWeapon(1, iq::sword, "the Weapon", 1, 2, iq::common);
    Armor aArmor(1, iq::legs, "the Armor", 2, iq::common);
    Material aMaterial(2, iq::metal, "the Material");

    Weapon *wPointer = &aWeapon;
    Armor *aPointer = &aArmor;
    Material *mPointer = &aMaterial;

    Inventory myIn;

    myIn.addItem(wPointer);
    myIn.addItem(aPointer);
    myIn.addItem(mPointer);
    myIn.addItem(wPointer);
    myIn.addItem(aPointer);
    myIn.addItem(mPointer);

    return 0;
}
