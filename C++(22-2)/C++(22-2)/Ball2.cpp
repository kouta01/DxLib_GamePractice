#include "Ball2.h"
#include "DxLib.h"

Ball2::Ball2()
{
	x2 = 50.0f;
	y2 = 50.0f;
	move_x2 = 0.0f;
	move_y2 = 0.0f;
	px = 1;
	py = 1;
}

Ball2::Ball2(float mx2, float my2)
{
	x2 = mx2;
	y2 = my2;
	mx2 = move_x2 = 0.0f;
	my2 = move_y2 = 0.0f;
	px = 3;
	py = 3;

}

Ball2::~Ball2()
{
}

void Ball2::Update()
{
	PLMove();
}

void Ball2::Draw()
{
	DrawCircleAA(x2, y2, 10, 100, GetColor(255, 0, 0), TRUE);
}

void Ball2::PLMove()
{
	x2 = move_x2 + px;
	y2 = move_y2 + py;

	if (CheckHitKey(KEY_INPUT_UP) != 0)
	{
		move_y2 -= 3.0f;
	}
	if (CheckHitKey(KEY_INPUT_DOWN) != 0)
	{
		move_y2 += 3.0f;
	}
	if (CheckHitKey(KEY_INPUT_LEFT) != 0)
	{
		move_x2 -= 3.0f;
	}
	if (CheckHitKey(KEY_INPUT_RIGHT) != 0)
	{
		move_x2 += 3.0f;
	}
}