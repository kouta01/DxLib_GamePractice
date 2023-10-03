#include<stdio.h>

int main(void)
{
	int i, j;
	i = 0;
	j = 0;

	int tbl[9][9];

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			tbl[i][j] = (i+1)* (j+1);
			printf(" %d ",tbl[i][j]);
		}
		printf("\n");
	}
}