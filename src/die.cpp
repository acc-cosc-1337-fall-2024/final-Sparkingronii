#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<die.h>
using std::cin;
using std::cout;

int Die::roll()
{
srand(time(0));
//int rolls = 1 + (rand() % 6);
int random = 0;
random = 1 + rand() % 6;
return random;
}