#include<iostream>
#include "Player.h"
#include "Goblin.h"

using namespace std;

#define IS_VALID(A) (A != nullptr)
#define SAFE_DELETE(A) if(A) { delete A; A = nullptr; }
//if(A) �̰� ���� �ִ��� Ȯ�� 1 
// A�� ���� ������ true �̰� ������ false 
// delete A ���� 2
// A = nullptr �����ص� �����Ⱚ ������ �־� �ʱ�ȭ 3

#define _SAFE_DELETE(Player)	delete Player; \
								Player = nullptr; \
								if (Player) \
								{ \
									cout << "Player ���" << endl; \
								} \
								else \
								{ \
									cout << "Player ��� ����" << endl; \
								}


int main() {

	FPlayer* Player = new FPlayer();
	FGoblin* Goblin = new FGoblin();

	bool IsRuning = true;

	while (IsRuning)
	{
		Player->Move();
		Goblin->Move();
	}

	SAFE_DELETE(Player);
	SAFE_DELETE(Goblin);




	return 0;
}