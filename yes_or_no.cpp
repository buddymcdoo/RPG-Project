#include "yes_or_no.h"

#include <iostream>

bool choice(){
    char yorn;

    while(true){
        std::cout << "(Enter y/n): ";
        std::cin >> yorn;
        if(yorn == 'y' || yorn == 'Y')
            return true;
        else if(yorn == 'n' || yorn == 'N')
            return false;
        else{
            std::cout << "That is not a valid option. Please try again. \n";
        }
    }
}
