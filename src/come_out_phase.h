#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#include<phase.h>
#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

class ComeOutPhase : public Phase
{
public:
ComeOutPhase();
RollOutcome get_outcome(Roll*,int roll);

private:


};

#endif