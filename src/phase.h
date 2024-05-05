#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#ifndef PHASE_H
#define PHASE_H

class Phase
{
public:
enum class RollOutcome : char {natural, craps, point, seven_out, nopoint};
RollOutcome get_outcome(Roll*,int roll);
virtual int rolled_value() = 0;

private:


};

#endif