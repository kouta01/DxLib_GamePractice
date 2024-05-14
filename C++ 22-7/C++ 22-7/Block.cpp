#include "Block.h"
#include "DxLib.h"

Block::Block()
{
	location.x = 0.0f;
	location.y = 0.0f;
	box_size.x = 50.0f;
	box_size.y = 10.0f;
	move.x = 1.0f;
	move.y = 1.0f;
	Color = GetColor(255, 0, 0);
}

Block::~Block()
{
}

void Block::Update()
{
	Move();
}

void Block::Draw() const
{
	DrawBoxAA(location.x,location.y,
		location.x + box_size.x, location.y + box_size.y,Color, TRUE);
}

void Block::SetLocation(float x, float y)
{
	location.x = x;
	location.y = y;
}

void Block::SetLocation(Vector2D vec)
{
	location.x = vec.x;
	location.y = vec.y;
}

void Block::Move()
{
	location.x += move.x;
	location.y += move.y;

	if (location.x >= 590)
	{
		move.x = -2;
	}

	if (location.y >= 470)
	{
		move.y = -2;
	}

	if (location.x <= 10)
	{
		move.x = 2;
	}

	if (location.y <= 10)
	{
		move.y = 2;
	}
}

void Block::Move(float x, float y)
{
	move.x = x;
	move.y = y;
}

void Block::Move(Vector2D vec)
{
	location.x = vec.x;
	location.y = vec.y;
}