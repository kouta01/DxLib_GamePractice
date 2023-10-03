#include "TitleScene.h"
#include "DxLib.h"
#include "InputControl.h"
#include "SceneManager.h"

/**************************************
*�}�N����`
**************************************/

/**************************************
*�^��`
**************************************/

/**************************************
*�ϐ��錾
**************************************/

int TitleImage;
int TitleBGM;

/**************************************
*�v���g�^�C�v�錾
**************************************/

/**************************************
*�^�C�g�����:����������
*���@��:�Ȃ�
*�߂�l:�G���[���
**************************************/

int TitleScene_Initialize(void)
{
	int ret = 0;

	//�摜�ǂݍ��ݏ���
	TitleImage = LoadGraph("images/title.png");
	//�����ǂݍ��ݏ���
	TitleBGM = LoadSoundMem("sounds/title_bgm.mp3");

	if (TitleImage == D_ERROR)
	{
		ret = D_ERROR;
	}
	if (TitleBGM == D_ERROR)
	{
		ret = D_ERROR;
	}

	return ret;

}

/**************************************
*�^�C�g�����:�X�V����
*���@��:�Ȃ�
*�߂�l:�Ȃ�
**************************************/

void TitleScene_Update(void)
{
	//�^�C�g��BGM
	if (CheckSoundMem(TitleBGM) == 0)
	{
		PlaySoundMem(TitleBGM, DX_PLAYTYPE_BACK);
	}

	if (GetKeyFlg(MOUSE_INPUT_LEFT) == TRUE)
	{
		if (GetMousePositionX() > 120 && GetMousePositionX() < 290 &&
			GetMousePositionY() > 260 && GetMousePositionY() < 315)
		{
			Change_Scene(E_GAMEMAIN);

			StopSoundMem(TitleBGM);
		}
		if (GetMousePositionX() > 120 && GetMousePositionX() < 220 &&
			GetMousePositionY() > 345 && GetMousePositionY() < 400)
		{
			Change_Scene(E_END);
			StopSoundMem(TitleBGM);
		}
	}
}

/**************************************
*�^�C�g�����:�`�揈��
*���@��:�Ȃ�
*�߂�l:�Ȃ�
**************************************/

void TitleScene_Draw(void)
{
	//�^�C�g����ʂ�\��
	DrawGraph(0, 0, TitleImage, FALSE);
}