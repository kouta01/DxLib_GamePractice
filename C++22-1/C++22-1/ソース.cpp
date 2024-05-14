#include "Ball.h"
#include "DxLib.h"

void Ball::Update()
{
	x += move_x;
	y += move_y;
}

void Ball::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(0, 0, 255), TRUE);
}
void Ball::Move()
{
	if (CheckHitKey(KEY_INPUT_UP) != 0)
	{
		y = y - 1;
	}
	if (CheckHitKey(KEY_INPUT_DOWN) != 0)
	{
		y = y + 1;
	}
	if (CheckHitKey(KEY_INPUT_RIGHT) != 0)
	{
		x = x + 1;
	}
	if (CheckHitKey(KEY_INPUT_LEFT) != 0)
	{
		x = x - 1;
	}
}