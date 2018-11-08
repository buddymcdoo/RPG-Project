#ifndef MATERIAL_H
#define MATERIAL_H

#include "GlobalEnums.h"

#include <string>

class Material
{
    public:
        Material(int qu, iq::mType mTy, std::string nam);

        std::string getName(){return name;}
        std::string getType(){return type;}
        int getQuality(){return quality;}

    protected:

    private:
        std::string name;
        std::string type;
        int quality; //This is the quality level of the material; e.g. copper = 1, gold = 4, etc..
};

#endif // MATERIAL_H
