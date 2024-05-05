#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter
{
public:
Roll* throw_dice(Die&, Die&);
void display_rolled_values();
~Shooter();

private:
std::vector<Roll> rolls(Roll*);

};

#endif