#include "DxLib.h"

int kaijo(int n) {

	if (n == 0) {
		return 1;
	}
	else {
		return n * kaijo(n - 1); //�ċA�Ăяo���@�����̊֐����Ăяo���Ă���
	}
}

int main(void)
{
	int n;
	printf("�K��̐��l����͂��Ă�������");
	scanf_s("%d", &n);
	printf("%d", kaijo(n));
}