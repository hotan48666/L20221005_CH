#include "Slime.h"
#include <iostream>

using namespace std;
FSlime::FSlime()
{
	cout << "Slime 持失切" << endl;

	Type = "Slime";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FSlime::~FSlime()
{
	cout << "Slime 社瑚切" << endl;
}
