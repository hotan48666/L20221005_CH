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
	

	cout << "FCharacter ������" << endl;
}

FCharacter::~FCharacter(){

	cout << "FCharacter �Ҹ���" << endl;
}

void FCharacter::Move()
{
	cout << Type << " �̵�" << endl;
}

void FCharacter::Attack()
{
	cout << Type << " ����" << endl;
}

void FCharacter::Dead()
{
	cout << Type << " ����" << endl;
}

void FCharacter::DecreaseHP()
{
	cout << Type << " ����" << endl;
}
