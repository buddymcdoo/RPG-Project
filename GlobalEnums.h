#ifndef GLOBALENUMS_H_INCLUDED
#define GLOBALENUMS_H_INCLUDED

/*
    This is a list of variables that are used in defining item attributes.
    "iq" stands for "Item Qualities." I got this idea to use a namespace
    for global enums from:
    https://stackoverflow.com/questions/6133080/whats-the-proper-way-to-share-an-enum-across-multiple-files
*/


//Item Qualities
namespace iq{
    enum rarity{common, uncommon, rare, epic, legendary};
    enum wType{sword, axe, mace, staff, dagger, bow, gun, thrown};
    enum mType{cloth, leather, herb, metal, wood};
    enum aType{legs, chest, shoulders, head, feet, hands};
}

//Character Traits
namespace ct{
    enum race{human, dwarf, elf, orc, goblin};
    enum cls{fighter, mage, rogue, cleric, ranger};
}

#endif // GLOBALENUMS_H_INCLUDED
