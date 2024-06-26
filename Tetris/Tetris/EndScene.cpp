#include "EndScene.h"
#include "DxLib.h"

/*********************
*マクロ定義
*********************/

/***********************
*型定義
***********************/

/***********************
*変数宣言
***********************/
int wait_count;

/**********************
*プロトタイプ宣言
**********************/

/*******************************************
*エンド画面:初期化処理
*引　数:なし
*戻り値:エラー情報(-1:異常有,-1以外:正常)
*******************************************/
int EndScene_Initialize(void)
{
	int ret = 0;

	wait_count = 0;

	return ret;
}

/************************
*エンド画面:更新処理
*引　数:なし
*戻り値:なし
************************/
void EndScene_Updeta(void)
{
	wait_count++;
}

/**********************
*エンド画面:描画処理
*引　数:なし
*戻り値:なし
**********************/
void EndScene_Draw(void)
{
	DrawString(10, 10, "エンド画面です", GetColor(255, 255, 255));
}

/****************************
*エンド画面:終了確認処理
*引　数:なし
*戻り値:なし
****************************/
int Get_EndTime(void)
{
	if (wait_count > 300)
	{
		rerutn TRUE;
	}
	return FALSE;
}