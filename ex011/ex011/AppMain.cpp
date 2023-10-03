#include <stdio.h>

int main(void)
{
	int t[8] = { 14,16,21,22,24,37,38,41 };
	int key, low, high, mid;

	//探索するKeyを入力してください
	printf("探索するKeyを入力してください");
	scanf_s("%d", &key);

	low = 0;
	high = sizeof(t) / sizeof(int) - 1;
	mid = (low + high) / 2;
	while (key != t[mid] && low <= high) {
		if (key < t[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	if (low <= high) {
		printf("データの場所はt[%d]です.\n", mid);
	}
	else {
		printf("該当データなし");
	}
}