#include<stdio.h>

int main(void)
{
    //j�́B�}������f�[�^�̈ʒu(�z��t[]�̓Y����)
    int t[6] = { 0,10,5,7,2,4 };
    int i, n, j;

    //�z��̒��g��\������
    for (i = 0; i <= 5; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    n = 5;
    //i�͐���ς̗v�f�� j�̓f�[�^�}���ʒu
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

    //�z��̒��g��\������
    for (i = 0; i <= 5; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}