#include "ArmorBag.h"
#include "yes_or_no.h"

#include <iostream>

using namespace std;

//CONSTRUCTORS

ArmorBag::ArmorBag(){
    for(int i = 0; i < MAX_SIZE_B; i++){
        bag[i] = nullptr;
    }
    counter = 0;
}

//ACCESSORS

void ArmorBag::getInventory(){
    int marker = 1;
    for(int i = 0; i < MAX_SIZE_B; i++){
        if(bag[i] == nullptr)
            continue;
        else{
            cout << marker++ << ".) " << bag[i]->getName() << endl;
        }
    }
}

string ArmorBag::showAtIndex(int index){
    if(bag[index-1] == nullptr)
        return "";
    else return bag[index-1]->getName();
}

//MUTATORS

void ArmorBag::addArmor(Armor *a){
    if(checkFull()){
        cout << "Your armor bag is full. Would you like to \n";
        cout << "replace a piece of armor in your bag with " << a->getName() << "? ";
        if(choice()){
            cout << "What armor do you want to replace it with? \n";
            getInventory();
            int choice = 0;
            while(choice >= MAX_SIZE_B || choice < 1){
                cout << "Please enter the number of the armor you want to replace: ";
                cin >> choice;
                if(choice < MAX_SIZE_B && choice > 0){
                    cout << "You have replaced " << bag[choice - 1]->getName() << " with " << a->getName() << ".\n";
                    delete bag[choice - 1];
                    bag[choice - 1] = a;
                    break;
                }
                cout << "That is not a valid option. \n";
            }
        }
        else{
            cout << "You chose not to pick up " << a->getName() << ". \n";
        }
    }
    else
        bag[counter++] = a;
}

bool ArmorBag::removeArmor(string nam){
    for (int i = 0; i < MAX_SIZE_B; i++){
        if(bag[i] == nullptr)
            continue;
        if(bag[i]->getName() == nam){
            bag[i] = nullptr;
            return true;
        }
    }
    return false;
}

Armor* ArmorBag::removeAtIndex(int index){
    Armor *temp = bag[index-1];
    bag[index-1] = nullptr;
    return temp;
}


//MISCELLANEOUS

bool ArmorBag::checkFull(){
    if(counter >= (MAX_SIZE_B - 1))
        return true;
    else
        return false;
}

