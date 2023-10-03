//��7�́@���K���2 �T���v��C�R�[�h�@���ȏ� 133�y�[�W�@�i���ȏ��ɍ��킹�Ă܂��j
//�z��̗v�f���́Asizeof(a)/sizeof(int)�ŋ��߂Ă܂��B
#include<stdio.h>

int bSearch(int* a, int n, int key) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (key != a[mid] && low <= high) {
        if (a[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }

    //�T���Ɏ��s�����ꍇ�� mid�� -1������
    if (low > high) {
        mid = -1;
    }
    return mid;
}

int main(void)
{
    int a[8] = { 14,16,21,22,24,37,38,41 };
    //�z��a[]�̗v�f�������߂�
    int alen = sizeof(a) / sizeof(int);
    int key;

    //�T������Key����͂��Ă������B
    printf("�T������Key����͂��Ă�������");
    scanf_s("%d", &key);

    //search �z��a[]�A�z��̗v�f���A�T��Key��n���Ă���
    printf("���̓f�[�^�̓Y������%d", bSearch(a, alen, key));

}