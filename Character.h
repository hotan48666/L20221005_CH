#pragma once
#include <string>
using namespace std;
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();


	int Gold;
	int HP;
	int Direction;
	string Type;
};

