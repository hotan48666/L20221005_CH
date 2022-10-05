#include<iostream>
#include "Player.h"
#include "Goblin.h"

using namespace std;

#define IS_VALID(A) (A != nullptr)
#define SAFE_DELETE(A) if(A) { delete A; A = nullptr; }

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