#pragma once

typedef std::uint16_t hptype; 

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

hp(){ CurrentHP = 1; MaxHP = 1;


};

hp(hptype cHP, hptype mHP){
    CurrentHP = cHP;
    MaxHP = mHP;

    if(CurrentHP < MaxHP){
        CurrentHP = MaxHP;

    };

};


    private:
        hptype ShieldHP;
        hptype CurrentHP;
        hptype MaxHP;

};