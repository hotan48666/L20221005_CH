#include "Slime.h"
#include <iostream>

using namespace std;
FSlime::FSlime()
{
	cout << "Slime ������" << endl;

	Type = "Slime";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FSlime::~FSlime()
{
	cout << "Slime �Ҹ���" << endl;
}
