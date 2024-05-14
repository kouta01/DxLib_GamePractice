#include<Stdio.h>
//‘åˆæ•Ï”
int n = 7;
int studentNo[7] = { 116,132,128,107,112,105,124 };
int score[7] = { 58,69,48,62,58,80,73 };

void swap(int x,int y) {
	int w;
	w = studentNo[x];
	studentNo[x] = studentNo[y];
	studentNo[y] = w;
	w = score[x];
	score[x] = score[y];
	score[y] = w;
}

int main(void)
{
	int i, j, max;
	i = 0;
	while (i < n - 1) {
		j = i + 1;
		max = i;
		while (j <= n) {
			if (score[j] > score[max]) {
				max = j;
			}
			else {
				if ((score[max] == score[j]) && (studentNo[max] > studentNo[j])) {
					max = j;
				}
			}
			j = j + 1;
		}
		swap(i, max);
		i = i + 1;
	}
}