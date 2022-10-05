#include "Character.h"
#include <string>
#include<iostream>

using namespace std;



FCharacter::FCharacter()
{
	Gold = 0;
	HP = 0;
	Direction = 0;
	Type = "Character";
	

	cout << "FCharacter 생성자" << endl;
}

FCharacter::~FCharacter(){

	cout << "FCharacter 소멸자" << endl;
}

void FCharacter::Move()
{
	cout << Type << " 이동" << endl;
}

void FCharacter::Attack()
{
	cout << Type << " 공격" << endl;
}

void FCharacter::Dead()
{
	cout << Type << " 죽음" << endl;
}

void FCharacter::DecreaseHP()
{
	cout << Type << " 줄음" << endl;
}
