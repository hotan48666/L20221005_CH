#include<iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

#define IS_VALID(A) (A != nullptr)
#define SAFE_DELETE(A) if(A) { delete A; A = nullptr; }
//if(A) 이게 값이 있는지 확인 1 
// A에 값이 있으면 true 이고 없으면 false 
// delete A 삭제 2
// A = nullptr 삭제해도 쓰레기값 있을수 있어 초기화 3

#define _SAFE_DELETE(Player)	delete Player; \
								Player = nullptr; \
								if (Player) \
								{ \
									cout << "Player 사용" << endl; \
								} \
								else \
								{ \
									cout << "Player 사용 못함" << endl; \
								}


int main() {

	FPlayer* Player = new FPlayer();
	Player->Move();
	FGoblin* Goblin = new FGoblin();
	Goblin->Move();
	FSlime* Slime = new FSlime();
	Slime->Move();
	FBoar* Boar = new FBoar();
	Boar->Move();

	bool IsRuning = true;

//	while (IsRuning)
//	{
//		Player->Move();
//		Goblin->Move();
//	}

	SAFE_DELETE(Player);
	SAFE_DELETE(Goblin);
	SAFE_DELETE(Slime);
	SAFE_DELETE(Boar);




	return 0;
}