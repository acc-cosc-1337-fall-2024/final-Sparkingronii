#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>

Roll::Roll(Die& roll1,Die& roll2)
{
    die1 = roll1;
    die2 = roll2;

    
};

void Roll::roll_dice()
{
    Roll::die1.roll();
    Roll::die2.roll();

        
};

int const Roll::roll_value()
{
    return rolled_value;

};

