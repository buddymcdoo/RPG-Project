#include "Inventory.h"

#include <iostream>
#include <iomanip>

Inventory::Inventory(){
    //ctor
}

//MUTATORS
void Inventory::addItem(Weapon *w){
    wBag.addWeapon(w);
}
void Inventory::addItem(Armor *a){
    aBag.addArmor(a);
}
void Inventory::addItem(Material *m){
    mBag.addMaterial(m);
}

void Inventory::removeItem(std::string name){
    if((aBag.removeArmor(name)) == false)
        if((mBag.removeMaterial(name)) == false)
            wBag.removeWeapon(name);
}
template <typename T>
T* Inventory::removeByIndex(int index, std::string bagType){
    if(bagType == "weapon"){
        return wBag.removeAtIndex(index);
    }
    else if(bagType == "armor"){
        return aBag.removeAtIndex(index);
    }
    else if(bagType == "material"){
        return mBag.removeAtIndex(index);
    }
    else{
        std::cout << "Something went wrong. Ignoring last command. \n";
    }
}

//ACCESSORS

/*
    This goes through each bag and finds all available items.
    It then outputs them it categorized order.
*/
void Inventory::getInventory(){
    std::string spacing = "               "; //This fills the gap if there is no item in one of these categories
    int max = 16;
    int wBagMarker, aBagMarker, mBagMarker;//These ints mark where we are in each bag
    wBagMarker = aBagMarker = mBagMarker = 1;
    bool wDone, aDone, mDone;//These bools check for each bag to see if it has displayed all its items
    wDone = aDone = mDone = false;

    std::cout << std::endl;
    std::cout << std::setw(9) << "WEAPONS" << std::setw(13) << "ARMOR" << std::setw(20) << "MATERIALS\n";

    while(!(wDone && aDone && mDone)){
        if(!wDone){
            for(int i = wBagMarker; i <= max; i++){
                if(wBag.showAtIndex(i) != ""){
                    if(wBagMarker == max){
                        std::cout << std::left << std::setw(15) << wBag.showAtIndex(i);
                        wDone = true;
                        break;
                    }
                    else{
                        std::cout << std::left << std::setw(15) << wBag.showAtIndex(i);
                        wBagMarker = i + 1;
                        break;
                    }
                }
                if(i == max && wBag.showAtIndex(i) == ""){
                    std::cout << spacing;
                    wDone = true;
                }
            }
        }
        else
            std::cout << spacing;

        if(!aDone){
            for(int i = aBagMarker; i <= max; i++){
                if(aBag.showAtIndex(i) != ""){
                    if(aBagMarker == max){
                        std::cout << std::left << std::setw(15) << aBag.showAtIndex(i);
                        aDone = true;
                        break;
                    }
                    else{
                        std::cout << std::left << std::setw(15) << aBag.showAtIndex(i);
                        aBagMarker = i + 1;
                        break;
                    }
                }
                if(i == max && aBag.showAtIndex(i) == ""){
                    std::cout << spacing;
                    aDone = true;
                }
            }
        }
        else
            std::cout << spacing;

        if(!mDone){
            for(int i = mBagMarker; i <= max; i++){
                if(mBag.showAtIndex(i) != ""){
                    if(mBagMarker == max){
                        std::cout << std::left << std::setw(15) << mBag.showAtIndex(i) << std::endl;
                        mDone = true;
                        break;
                    }
                    else{
                        std::cout << std::left << std::setw(15) << mBag.showAtIndex(i) << std::endl;
                        mBagMarker = i + 1;
                        break;
                    }
                }
                if(i == max && mBag.showAtIndex(i) == ""){
                    std::cout << std::endl;
                    mDone = true;
                }
            }
        }
        else
            std::cout << std::endl;
    }
}
