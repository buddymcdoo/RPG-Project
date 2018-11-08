#include "WeaponBag.h"
#include "yes_or_no.h"

#include <iostream>

using namespace std;

//CONSTRUCTORS

WeaponBag::WeaponBag(){
    for(int i = 0; i < MAX_SIZE; i++){
        bag[i] = nullptr;
    }
    counter = 0;
}

//ACCESSORS

void WeaponBag::getInventory(){
    int marker = 1;
    for(int i = 0; i < MAX_SIZE; i++){
        if(bag[i] == nullptr)
            continue;
        else{
            cout << marker++ << ".) " << bag[i]->getName() << endl;
        }
    }
}

string WeaponBag::showAtIndex(int index){
    if(bag[index-1] == nullptr)
        return "";
    else return bag[index-1]->getName();
}

//MUTATORS

void WeaponBag::addWeapon(Weapon *w){
    if(checkFull()){
        cout << "Your weapon bag is full. Would you like to \n";
        cout << "replace a weapon in your bag with " << w->getName() << "? ";
        if(choice()){
            cout << "What weapon do you want to replace it with? \n";
            getInventory();
            int choice = 0;
            while(choice >= MAX_SIZE || choice < 1){
                cout << "Please enter the number of the weapon you want to replace: ";
                cin >> choice;
                if(choice < MAX_SIZE && choice > 0){
                    cout << "You have replaced " << bag[choice - 1]->getName() << " with " << w->getName() << ".\n";
                    delete bag[choice - 1];
                    bag[choice - 1] = w;
                    break;
                }
                cout << "That is not a valid option. \n";
            }
        }
        else{
            cout << "You chose not to pick up " << w->getName() << ". \n";
        }
    }
    else
        bag[counter++] = w;
}

bool WeaponBag::removeWeapon(string nam){
    for (int i = 0; i < MAX_SIZE; i++){
        if(bag[i] == nullptr)
            continue;
        if(bag[i]->getName() == nam){
            bag[i] = nullptr;
            return true;
        }
    }
    return false;
}

Weapon* WeaponBag::removeAtIndex(int index){
    Weapon *temp = bag[index-1];
    bag[index-1] = nullptr;
    return temp;
}

//MISCELLANEOUS

bool WeaponBag::checkFull(){
    if(counter >= (MAX_SIZE - 1))
        return true;
    else
        return false;
}
