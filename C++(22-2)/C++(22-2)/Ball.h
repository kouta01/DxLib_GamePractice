#pragma once

class Ball
{
public:
	float x;
	float y;
	float move_x;
	float move_y;
	float a;
	float b;

	Ball();
	Ball(float mx, float my);
	~Ball();

public:
	void Update();
	void Draw();
	void ENMove();
};