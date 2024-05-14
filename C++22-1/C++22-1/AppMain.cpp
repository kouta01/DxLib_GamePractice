#include "DxLib.h"
#include "Ball.h"

//���C���֐�
int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_
	LPSTR il, _In_ int ii)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏�����
	if (DxLib_Init() == -1)

	{
		return -1;
	}

	//�I�u�W�F�N�g�𐶐�
	Ball ball;

	//�l��������
	ball.x = 50.0f;
	ball.y = 50.0f;

	ball.move_x = 0.0f;
	ball.move_y = 0.0f;

	//���C�����[�v
	while (ProcessMessage() != -1)
	{
		ball.Move();
		//�X�V����
		ball.Update();

		//��ʂ̏�����
		ClearDrawScreen();

		//�`�揈��
		ball.Draw();

		//����ʂ̓��e��\��ʂɔ��f
		ScreenFlip();
	}

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}