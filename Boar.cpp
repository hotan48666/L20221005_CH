#include "Boar.h"
#include <iostream>

using namespace std;

FBoar::FBoar()
{
	cout << "Boar ������" << endl;

	Type = "Boar";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FBoar::~FBoar()
{
	cout << "Boar �Ҹ���" << endl;
}
