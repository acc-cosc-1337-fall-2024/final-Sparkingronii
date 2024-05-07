#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<die.h>
#include<roll.h>
#include<shooter.h>
#include<phase.h>
#include<come_out_phase.h>
#include<point_phase.h>

ComeOutPhase::get_outcome(Roll* roll)
{
    if (roll == 7 || 11)
    {
        return RollOutcome::natural;
    }
    else if (roll == 2 || 3 || 12)
    {
        return RollOutcome::craps;
    }
    else
    {
        return RollOutcome::point;
    }
        
};