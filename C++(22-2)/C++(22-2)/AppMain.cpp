#include "DxLib.h"
#include "Ball.h"
#include "Ball2.h"
int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii) 
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	Ball2 b1;
	Ball b2(320.0f, 240.0f);

	while (ProcessMessage() != -1)
	{
		

		b1.Update();
		b2.Update();

		ClearDrawScreen();

		b1.Draw();
		b2.Draw();

		ScreenFlip();
	}

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}