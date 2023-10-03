//教科書 例題7-1 112ページ ハンバーガーショップ サンプルプログラム
//C++のstringライブラリをインクルードして stringクラスを利用しています。
#include<stdio.h>
#include<string>

int main(void)
{
    // amountは数量 iはカウンター,keyは入力される商品番号
    int amount, i;
    char key[5];
    std::string itemNo[7] = { "A001","A003","A005","A007","A009","A010","A011" };
    std::string itemName[7] = { "ハンバーガー","チーズバーガー","エッグサンド","アイスコーヒー","アイスティ","グリーンサラダ","フライドポテト" };
    int itemPrice[7] = { 200,260,240,120,120,280,150 };

    printf("商品番号を入力してください");
    scanf_s("%s", &key, 5);
    printf("数量を入力してください");
    scanf_s("%d", &amount);

    i = 0;

    //目的のデータが見つかるまで線形探索を行う。
    while (i < 7 && strcmp(key, itemNo[i].c_str())) {
        i++;
    }

    //入力された商品番号から商品名と単価、合計金額を表示する
    //c_str()で、c++の文字列をprintf()で表示できるように変換する
    if (i < 7) {
        printf("商品名は ");
        printf("%s です。\n", itemName[i].c_str());
        printf("単価は ");
        printf("%d です。\n", itemPrice[i]);
        printf("合計金額は ");
        printf("%d 円です。\n", itemPrice[i] * amount);
    }
    else {
        printf("データエラー");
    }
}