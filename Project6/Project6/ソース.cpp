#include<stdio.h>

int main(void)
{

    int t[5] = { 10,5,7,2,4 };
    int i, j, w, n;

    //配列の中身を表示する
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    n = 5;

    while (n > 1) {
        j = 0;
        while (j < n-1) {
            if (t[j] < t[j+1]) {
                //t[j]とt[j+1]を交換している
                w = t[j];
                t[j] = t[j + 1];
                t[j + 1] = w;
            }
            j = j + 1;
        }
        n = n - 1;
    }

    //配列の中身を表示する
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}