#pragma once

#include "Vector2D.h"

class Block
{
private:
	Vector2D location;
	Vector2D box_size;
	Vector2D move;
public:

	int Color;

	Block();
	~Block();

	void Update();

	void Draw() const;

	void SetLocation(float x, float y);
	void SetLocation(Vector2D vec);

	void Move();
	void Move(float x, float y);
	void Move(Vector2D vec);
};