//サンプルCコード (教科書に合わせてますが配列の要素数は 100->10に変更してます
#include<stdio.h>
int main(void)
{
	int k[10] = { 0, 1, 2, 3, 14, 5, 6, 7, 8, 4 };
	int v[10] = { 55,22,21,99, 98,40,53,41,45,67 };
	int key, value, hash, i, j;
	for (j = 0; j < 10; j++) {
		printf("%d ", k[j]);
		printf("%d¥n", v[j]);
	}
	printf("keyを入力してください¥n"); scanf_s("%d", &key);
	hash = key % 10;
	if (k[hash] != -1) {

		i = (hash + 1) % 10;
		while ((i != hash) && (k[i] != key) && k[i] != -1) {

			i = (i + 1) % 10;

		}
		if (k[i] == key) {

			printf("valueは %d¥n", v[i]);

		}
		else {

			printf("エラー¥n");

		}

	}
	else {

		printf("%d¥n", v[hash]);

	}
	for (j = 0; j < 10; j++) {
		printf("%d ", k[j]);
		printf("%d¥n", v[j]);
	}
}