#include <iostream>
#include <string>

//クラス「Student」を定義
class Student
{
public:
    int studentNo;
    std::string name;
};

int main()
{
    //定義したクラスの変数(インスタンス)を宣言
    Student s;
    s.studentNo = 1;
    s.name = "山田太郎";

    std::cout << "number:" << s.studentNo;
    std::cout << "\nname:" << s.name << std::endl;

    std::cin.get();
}
