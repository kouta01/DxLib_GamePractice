#include "Ball.h"
#include "DxLib.h"

Ball::Ball()
{
	x = 0.0f;
	y = 0.0f;
	radius = 10.0f;
	color = GetColor(255, 0, 0);
}

Ball::Ball(float mx, float my)
{
	x = mx;
	y = my;
	radius = 10.0f;
	color = GetColor(255, 0, 0);
}

Ball::~Ball()
{
}

void Ball::Update()
{
	x += 2.0f;
	y += 2.0f;
}

void Ball::Draw()
{
	DrawCircleAA(x, y, radius,100,color, TRUE);
}

float Ball::Getx()
{
	return x;
}

float Ball::Gaty()
{
	return y;
}

float Ball::Radius()
{
	return radius;
}