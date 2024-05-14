#include "Ball.h"
#include "DxLib.h"

Ball::Ball()
{
	x = 250.0f;
	y = 50.0f;
	move_x = 0.0f;
	move_y = 0.0f;
	a = 1;
	b = 1;
}

Ball::Ball(float mx, float my)
{
	x = mx;
	y = my;
	my = move_x = 0.0f;
	my = move_y = 0.0f;
	a = 3;
	b = 3;
}

Ball::~Ball()
{
}

void Ball::Update()
{
	ENMove();
}

void Ball::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

void Ball::ENMove()
{
	x += a;
	y += b;

	if (x >= 630)
	{
		a = -3;
	}

	if (y >= 470)
	{
		b = -3;
	}

	if (x <= 10)
	{
		a = 3;
	}

	if (y <= 10)
	{
		b = 3;
	}
}