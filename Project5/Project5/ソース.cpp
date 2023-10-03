//第7章　練習問題2 サンプルCコード　教科書 133ページ　（教科書に合わせてます）
//配列の要素数は、sizeof(a)/sizeof(int)で求めてます。
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

    //探索に失敗した場合は midに -1を入れる
    if (low > high) {
        mid = -1;
    }
    return mid;
}

int main(void)
{
    int a[8] = { 14,16,21,22,24,37,38,41 };
    //配列a[]の要素数を求める
    int alen = sizeof(a) / sizeof(int);
    int key;

    //探索するKeyを入力してださい。
    printf("探索するKeyを入力してください");
    scanf_s("%d", &key);

    //search 配列a[]、配列の要素数、探索Keyを渡している
    printf("入力データの添え字は%d", bSearch(a, alen, key));

}