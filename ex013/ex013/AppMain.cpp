//�@���ȏ� ���8-2 144�y�[�W �I���\�[�g �T���v���v���O����
#include<stdio.h>

int main(void)
{

    int t[5] = { 10,5,7,2,4 };
    int i, j, min, w;

    //�z��̒��g��\������
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }

    i = 0;

    while (i < 4) {
        j = i + 1;
        min = i;

        while (j < 5) {
            if (t[j] < t[min]) {
                min = j;
            }
            j = j + 1;
        }

        if (i != min) {
            w = t[i];
            t[i] = t[min];
            t[min] = w;
        }
        i = i + 1;
    }

    //�z��̒��g��\������
    for (i = 0; i <= 4; i++) {
        printf("t[%d]=%d\n", i, t[i]);
    }
}