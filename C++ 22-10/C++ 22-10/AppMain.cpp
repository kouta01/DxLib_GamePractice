#include "DxLib.h"

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

	try
	{
		int graphic_handle = LoadGraph("images/test.png");

		if (graphic_handle == -1)
		{
			throw("画像ファイルが読み込めませんn");
		}

		while (ProcessMessage() != -1)
		{
			ClearDrawScreen();

			DrawGraph(320, 240, graphic_handle, TRUE);

			ScreenFlip();
		}
	}
	catch (const char* err_log)
	{
		OutputDebugString(err_log);
	}

	DxLib_End();

	return 0;
}