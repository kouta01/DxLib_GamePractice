#include<stdio.h>

int main(void)
{

    //jは、挿入するデータの位置 (配列 t[] の添え字)
    int t[5] = { 10,5,7,2,4 };
    int i, n, j, w;

    //配列の中身を表示する
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    n = 1;

    while (n < 5) {
        j = n;
        w = t[j]; //データを避難させる

        while ((j > 0) && (t[j - 1] < w)) {
            t[j] = t[j - 1];  //データを左から右に移動
            j = j - 1;
        }
        t[j] = w;    //データを挿入する
        n = n + 1;
    }

    //配列の中身を表示する
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}