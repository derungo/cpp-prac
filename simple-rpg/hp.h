#pragma once
#include "hitpointtypes.h"

class hp {
    public:

    // returns true if success set
    bool setMaxHP(hptype new_max_hp)
    {
        if (new_max_hp < 1)
            return false;

        MaxHP = new_max_hp;

        if (CurrentHP > MaxHP)
            CurrentHP = MaxHP;

        return true;

    };
// getter
    hptype getMaxHP() {
        return MaxHP;
    };
    hptype getCurrentHP() {
        return CurrentHP;

    };
    
    // take damage
    void TakeDamage(hptype damage) {
        if (damage > CurrentHP) {
            CurrentHP = 0;

        return;
        }
    

        CurrentHP -= damage;
    }


  // healing  
void heal(hptype amount) {
    if (amount + CurrentHP > MaxHP) {
       CurrentHP = MaxHP;
       return; 
    }

    CurrentHP += amount;

}



    private:
        hptype ShieldHP;
        hptype CurrentHP;
        hptype MaxHP;

};