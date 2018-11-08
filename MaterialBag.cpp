#include "MaterialBag.h"
#include "yes_or_no.h"

#include <iostream>

using namespace std;

//CONSTRUCTORS

MaterialBag::MaterialBag(){
    for(int i = 0; i < MAX_SIZE_C; i++){
        bag[i] = nullptr;
    }
    counter = 0;
}

//ACCESSORS

void MaterialBag::getInventory(){
    int marker = 1;
    for(int i = 0; i < MAX_SIZE_C; i++){
        if(bag[i] == nullptr)
            continue;
        else{
            cout << marker++ << ".) " << bag[i]->getName() << endl;
        }
    }
}

string MaterialBag::showAtIndex(int index){
    if(bag[index-1] == nullptr)
        return "";
    else return bag[index-1]->getName();
}

//MUTATORS

void MaterialBag::addMaterial(Material *m){
    if(checkFull()){
        cout << "Your material bag is full. Would you like to \n";
        cout << "replace a material in your bag with " << m->getName() << "? ";
        if(choice()){
            cout << "What material do you want to replace it with? \n";
            getInventory();
            int choice = 0;
            while(choice >= MAX_SIZE_C || choice < 1){
                cout << "Please enter the number of the material you want to replace: ";
                cin >> choice;
                if(choice < MAX_SIZE_C && choice > 0){
                    cout << "You have replaced " << bag[choice - 1]->getName() << " with " << m->getName() << ".\n";
                    delete bag[choice - 1];
                    bag[choice - 1] = m;
                    break;
                }
                cout << "That is not a valid option. \n";
            }
        }
        else{
            cout << "You chose not to pick up " << m->getName() << ". \n";
        }
    }
    else
        bag[counter++] = m;
}

bool MaterialBag::removeMaterial(string nam){
    for (int i = 0; i < MAX_SIZE_C; i++){
        if(bag[i] == nullptr)
            continue;
        if(bag[i]->getName() == nam){
            bag[i] = nullptr;
            return true;
        }
    }
    return false;
}

Material* MaterialBag::removeAtIndex(int index){
    Material *temp = bag[index-1];
    bag[index-1] = nullptr;
    return temp;
}


//MISCELLANEOUS

bool MaterialBag::checkFull(){
    if(counter >= (MAX_SIZE_C - 1))
        return true;
    else
        return false;
}
