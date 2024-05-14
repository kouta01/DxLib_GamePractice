#include "DxLib.h"
#include "Ball.h"

//メイン関数
int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_
	LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	//オブジェクトを生成
	Ball ball;

	//値を初期化
	ball.x = 50.0f;
	ball.y = 50.0f;

	ball.move_x = 0.0f;
	ball.move_y = 0.0f;

	//メインループ
	while (ProcessMessage() != -1)
	{
		ball.Move();
		//更新処理
		ball.Update();

		//画面の初期化
		ClearDrawScreen();

		//描画処理
		ball.Draw();

		//裏画面の内容を表画面に反映
		ScreenFlip();
	}

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}