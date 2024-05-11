#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#ifndef SHOOTER_H
#define SHOOTER_H
/*/
class Shooter
{
public:
Roll* throw_dice(Die& a, Die& b);
void display_rolled_values();
~Shooter();

private:
//std::vector<Roll>& rolls((int Roll*) = new int [roll_value]);
//int rolls(std::vector<Roll>& (Roll* = new int[]));
std::vector<Roll>& Shooter::rolls(Roll*);
};

#endif