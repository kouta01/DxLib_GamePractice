#include<stdio.h>

int main(void)
{
    //jは。挿入するデータの位置(配列t[]の添え字)
    int t[6] = { 0,10,5,7,2,4 };
    int i, n, j;

    //配列の中身を表示する
    for (i = 0; i <= 5; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    n = 5;
    //iは整列済の要素数 jはデータ挿入位置
    i = 1;

    while (i < n) {
        j = i + 1;
        t[0] = t[j];

        while ((t[j - 1] > t[0]) && (j > 1)) {
            t[j] = t[j - 1];
            j = j + 1;
        }
        t[j] = t[0];
        i = i + 1;
    }

    //配列の中身を表示する
    for (i = 0; i <= 5; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}