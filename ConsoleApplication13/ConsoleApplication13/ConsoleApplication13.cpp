//C言語での構造体配列　（教科書 198ページに合わせて構造体を定義）
#include <stdio.h>
#include <string.h>

//学生を表す構造体
//構造体 struct gakusei型
struct gakusei {
    char studentNo[10];
    char name[20];
    int kokugo;
    int sugaku;
    int eigo;
};

//平均値を表す構造体
struct avg {
    double kokugo;
    double sugaku;
    double eigo;
};

//合計値を表す構造体
struct total {
    int kokugo;
    int sugaku;
    int eigo;
};

void seisekiAvg(gakusei gakusei[2]) {
    struct avg avg;
    struct total total;
    int i;

    total.kokugo = 0;
    total.sugaku = 0;
    total.eigo = 0;

    for (i = 0; i < 2; i++) {
        total.kokugo = total.kokugo + gakusei[i].kokugo;
        total.sugaku = total.sugaku + gakusei[i].sugaku;
        total.eigo = total.eigo + gakusei[i].eigo;
    }

    avg.kokugo = total.kokugo / 2;
    avg.sugaku = total.sugaku / 2;
    avg.eigo = total.eigo / 2;

    printf("国語平均%f\n", avg.kokugo);
    printf("数学平均%f\n", avg.sugaku);
    printf("英語平均%f\n", avg.eigo);

}

int main(void)
{
    //構造体配列を使う場合は配列にも名前をつける必要がある。
    //データは、1つだけ入力している。

    struct gakusei gakusei[2];

    strcpy_s(gakusei[0].studentNo, "1001");
    strcpy_s(gakusei[0].name, "山田一郎");
    gakusei[0].kokugo = 52;
    gakusei[0].sugaku = 71;
    gakusei[0].eigo = 46;

    strcpy_s(gakusei[1].studentNo, "1004");
    strcpy_s(gakusei[1].name, "鈴木次郎");
    gakusei[1].kokugo = 90;
    gakusei[1].sugaku = 98;
    gakusei[1].eigo = 99;

    seisekiAvg(gakusei);

}