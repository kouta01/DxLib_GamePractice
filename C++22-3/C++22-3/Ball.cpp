#include "Ball.h"
#include "DxLib.h"

Ball::Ball()
{
	x = 320.0f;
	y = 240.0f;
	Color = GetColor(255, 0, 255);
	radius = 0.0f;
	move_x = 0.0f;
	move_y = 0.0f;
}

Ball::Ball(float mx, float my)
{
	x = move_x + x;
	y = move_y + y;
	x = 0.0f;
	y = 0.0f;
	Color = GetColor(255, 0, 255);
	radius = 0.0f;
	move_x = 0.0f;
	move_y = 0.0f;
}

Ball::~Ball()
{
}

void Ball::Update()
{
	x = move_x + x;
	y = move_y + y;
}

void Ball::Draw()
{
	DrawCircleAA(x, y, 10, 100,Color, TRUE);
}

void Ball::move() {
	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
		move_y += 2.0f;
	}

	if (y > 480)
	{
		move_y = 0.0f;

		y = 240.0f;
	}
}