#pragma once

class Bar
{
private:
	float x;
	float y;
	float radius;

public:
	Bar();
	~Bar();

	void Update();
	void Draw();

	void SetLocation(float mx, float my);

	float Getx();
	float Gety();
	float Radius();
};