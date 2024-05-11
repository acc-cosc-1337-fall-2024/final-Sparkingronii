#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#ifndef ROLL_H
#define ROLL_H

class Roll
{

public:
Roll(Die& roll1,Die& roll2) : die1(roll1), die2(roll2) {};
//Roll(Die& roll1, Die& roll2);
//Roll();
//Roll(Die& die1,Die& die2) : ((die1 = 0), (die2 = 0)) {};
//Roll(int& roll1,int& roll2) : die1(roll1), die2(roll2) {};
void roll_dice();
int const roll_value();

private:
Die& die1;
Die& die2;
int rolled_value;

};

#endif
