#include "Goblin.h"
#include <iostream>
using namespace std;
FGoblin::FGoblin()
{
	cout << "Goblin ������" << endl;

	Type = "Goblin";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FGoblin::~FGoblin()
{
	cout << "Goblin �Ҹ���" << endl;
}

