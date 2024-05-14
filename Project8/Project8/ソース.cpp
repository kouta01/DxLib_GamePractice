#include<stdio.h>

int main(void)
{

	int t[8] = { 7,3,9,5,2,8,6,4 };
	int gap, i, n, j, w;

	for (i = 0; i <= 7; i++) {
		printf("t[%d]=%d\n", i, t[i]);
	}
	n = 8;
	gap = n / 2;

	while (gap > 0) {
		i = gap;
		while (i < n) {
			j = i;
			w = t[i];
			while ((j >= gap) && (t[j - gap] < w)) {
				t[j] = t[j - gap];
				j = j - gap;
			}
			t[j] = w;
			i = i + 1;
		}
		gap = gap / 2;
	}
	for (i = 0; i <= 7; i++) {
		printf("t[%d]=%d\n", i, t[i]);
	}
}