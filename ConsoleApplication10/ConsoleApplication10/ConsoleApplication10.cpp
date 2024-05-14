#include "DxLib.h"

int kaijo(int n) {

	if (n == 0) {
		return 1;
	}
	else {
		return n * kaijo(n - 1); //再帰呼び出し　自分の関数を呼び出している
	}
}

int main(void)
{
	int n;
	printf("階乗の数値を入力してください");
	scanf_s("%d", &n);
	printf("%d", kaijo(n));
}