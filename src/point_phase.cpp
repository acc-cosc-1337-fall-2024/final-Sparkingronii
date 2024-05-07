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

PointPhase::PointPhase(int p)
{

};

PointPhase::get_outcome(Roll* roll)
{
    if(roll == point)
    {
        return RollOutcome::point;
    }
    else if(roll == 7)
    {
        return RollOutcome::seven_out;
    }
    else
    {
        return RollOutcome::nopoint;
    }
};