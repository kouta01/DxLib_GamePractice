//���ȏ� ���7-1 112�y�[�W �n���o�[�K�[�V���b�v �T���v���v���O����
//C++��string���C�u�������C���N���[�h���� string�N���X�𗘗p���Ă��܂��B
#include<stdio.h>
#include<string>

int main(void)
{
    // amount�͐��� i�̓J�E���^�[,key�͓��͂���鏤�i�ԍ�
    int amount, i;
    char key[5];
    std::string itemNo[7] = { "A001","A003","A005","A007","A009","A010","A011" };
    std::string itemName[7] = { "�n���o�[�K�[","�`�[�Y�o�[�K�[","�G�b�O�T���h","�A�C�X�R�[�q�[","�A�C�X�e�B","�O���[���T���_","�t���C�h�|�e�g" };
    int itemPrice[7] = { 200,260,240,120,120,280,150 };

    printf("���i�ԍ�����͂��Ă�������");
    scanf_s("%s", &key, 5);
    printf("���ʂ���͂��Ă�������");
    scanf_s("%d", &amount);

    i = 0;

    //�ړI�̃f�[�^��������܂Ő��`�T�����s���B
    while (i < 7 && strcmp(key, itemNo[i].c_str())) {
        i++;
    }

    //���͂��ꂽ���i�ԍ����珤�i���ƒP���A���v���z��\������
    //c_str()�ŁAc++�̕������printf()�ŕ\���ł���悤�ɕϊ�����
    if (i < 7) {
        printf("���i���� ");
        printf("%s �ł��B\n", itemName[i].c_str());
        printf("�P���� ");
        printf("%d �ł��B\n", itemPrice[i]);
        printf("���v���z�� ");
        printf("%d �~�ł��B\n", itemPrice[i] * amount);
    }
    else {
        printf("�f�[�^�G���[");
    }
}