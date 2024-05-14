#include "DxLib.h"
#include "Ball.h"

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR IpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	Ball* ball = new Ball;

	while (ProcessMessage() != -1)
	{
		ball->Update();

		ClearDrawScreen();

		ball->Draw();

		ScreenFlip();
	}

	delete ball;

	WaitKey();

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}