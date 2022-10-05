#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	cout << "Player 持失切" << endl;

	Type = "Player";

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FPlayer::~FPlayer()
{
	cout << "Player 社瑚切" << endl;
}

void FPlayer::PlayerCollect()
{
}

