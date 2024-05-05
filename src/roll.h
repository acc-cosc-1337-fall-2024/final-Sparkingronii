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
int Roll::dieroll(int& die1,int& die2);
void roll_dice();
int const roll_value();

private:
Die& die1;
Die& die2;
int rolled_value();

};

#endif