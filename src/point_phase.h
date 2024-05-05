#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#include<phase.h>
#ifndef POINT_PHASE_H
#define POINT_PHASE_H

class PointPhase : public Phase
{
public:
PointPhase(int p);
RollOutcome get_outcome(Roll*,int roll);

private:
int point;

};

#endif