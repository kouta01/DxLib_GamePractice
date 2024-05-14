#include "Bar.h"
#include "DxLib.h"

#define BAR_SIZE_X   (30.0f)

Bar::Bar()
{
	x = 0.0f;
	y = 0.0f;
	radius = 10;
}

Bar::~Bar()
{

}

void Bar::Update()
{

}

void Bar::Draw()
{
	DrawBoxAA(x - BAR_SIZE_X, y, x + BAR_SIZE_X, y + 10.0f, GetColor(255, 255,255), TRUE);
}

void Bar::SetLocation(float mx, float my)
{
	if (mx < BAR_SIZE_X)
	{
		x = BAR_SIZE_X;
	}
	else if (mx > (640 - BAR_SIZE_X))
	{
		x = (640 - BAR_SIZE_X);
	}
	else
	{
		x = mx;
	}

	y = my;
}

float Bar::Getx()
{
	return x;
}

float Bar::Gety()
{
	return y;
}

float Bar::Radius()
{
	return radius;
}