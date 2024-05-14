#include "DxLib.h"
#include "Block.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_
	LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	Block* block = new Block;

	block->SetLocation(320.0f, 240.0f);

	while (ProcessMessage() != -1)
	{
		block->Update();
		ClearDrawScreen();
		block->Draw();
		ScreenFlip();
	}

	delete block;

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}