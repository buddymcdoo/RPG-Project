#include "Material.h"

using namespace iq;

Material::Material(int qu, mType mTy, std::string nam){
    quality = qu;
    name = nam;

    switch(mTy){
    case cloth:
        type = "Cloth";
        break;
    case leather:
        type = "Leather";
        break;
    case herb:
        type = "Herb";
        break;
    case metal:
        type = "Metal";
        break;
    case wood:
        type = "Wood";
        break;
    }
}
