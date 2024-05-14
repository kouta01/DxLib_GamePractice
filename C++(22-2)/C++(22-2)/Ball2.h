#pragma once

class Ball2
{
public:
	float x2;
	float y2;
	float move_x2;
	float move_y2;
	float px;
	float py;

	Ball2();
	Ball2(float mx2, float my2);
	~Ball2();

public:
	void Update();
	void Draw();
	void PLMove();
};