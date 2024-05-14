#pragma once

class Ball
{
public:
	float x;
	float y;
	float radius;
	int Color;
	float move_x;
	float move_y;
	

	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();
	void Draw();
	void move();
};