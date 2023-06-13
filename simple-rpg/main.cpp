#include <iostream>
#include "hp.h"
#include "allclass.h"
#include "levelsystem.h"

int main()
{
    Warrior warr1;

    Wizard wiz1;

    Cleric cler1;

    Rogue rog1;

    for (int i = 0; i < 2; i++) {
         std::cout << "Cleric Level \n"
            << "-MaxHP: " << cler1.getMaxHP() << '\n'
            << "-Strength: " << cler1.getStrength() << '\n'
            << "-Intellect: " << cler1.getIntellect() << '\n'
            << "-Level: " << cler1.getLevel() << '\n'
            << "-EXP: " << cler1.getCurrentEXP() << '/' << cler1.getEXPToNextLevel() << '\n';
         if (i < 1) 
            cler1.gainEXP(100u);
    };
    return 0;
    
};