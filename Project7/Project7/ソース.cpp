#include<stdio.h>

int main(void)
{

    //j�́A�}������f�[�^�̈ʒu (�z�� t[] �̓Y����)
    int t[5] = { 10,5,7,2,4 };
    int i, n, j, w;

    //�z��̒��g��\������
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    n = 1;

    while (n < 5) {
        j = n;
        w = t[j]; //�f�[�^�������

        while ((j > 0) && (t[j - 1] < w)) {
            t[j] = t[j - 1];  //�f�[�^��������E�Ɉړ�
            j = j - 1;
        }
        t[j] = w;    //�f�[�^��}������
        n = n + 1;
    }

    //�z��̒��g��\������
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}