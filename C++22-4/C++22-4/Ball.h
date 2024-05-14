#pragma once

class Ball
{
private:
	float x;
	float y;
	float radius;

	int color;

public:
	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();
	void Draw();

	float Getx();
	float Gaty();
	float Radius();
};