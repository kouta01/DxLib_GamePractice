#include "DxLib.h"
#include "math.h"
#include "Ball.h"
#include "Bar.h"

bool HitCheck(Ball*, Bar*);

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	Ball* p_ball = new Ball;
	Bar* p_bar = new Bar;

	while (ProcessMessage() != -1)
	{
		if (p_ball != nullptr)
		{
			p_ball->Update();
		}

		p_bar->Update();

		int mouse_x;
		GetMousePoint(&mouse_x, NULL);
		p_bar->SetLocation((float)mouse_x, 420.0f);

		ClearDrawScreen();

		if (HitCheck(p_ball, p_bar) == true)
		{
			delete p_ball;
			p_ball = nullptr;
		}
		if (p_ball != nullptr)
		{
			p_ball->Draw();
		}

		p_bar->Draw();

		ScreenFlip();
	}

	delete p_bar;

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}

bool HitCheck(Ball* e, Bar* p)
{
	bool NIKE = false;

	if (e != nullptr)
	{
		if (pow(e->Getx() - p->Getx(), 2.0) + pow(e->Gaty()-p->Gety(), 2.0) <= pow(e->Radius() + p->Radius(), 2.0))
		{
			NIKE = true;
		}
	}
	return NIKE;
}