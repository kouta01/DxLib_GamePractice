#include "DxLib.h"
#include "Ball.h"

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR IpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
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

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}