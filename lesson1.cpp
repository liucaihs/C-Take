/*
 *  C++ 第一课!!
 *  g++ lesson1.cpp -o l1
 * */

#include <iostream>

// 命名空间
using namespace std;

// 类型定义
typedef int feet;

// 枚举
enum color {
    red, green = 5, blue
};
enum color1 {
    red1, green1 = 5, blue1
} ccc;


// 函数
int func() {
    // 数据类型
    // http://www.runoob.com/cplusplus/cpp-data-types.html
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of unsigned char : " << sizeof(unsigned char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

// 主入口
int main() {
    ccc = green1;
    cout << ccc << endl;

    color c = color(6);
    color cc = red;
    cout << c << endl;
    cout << cc << endl;

    // 打印
    func();

    // -trigraphs
//    cout << "Hel??-  ~ /?lo, wor??ld!\n\n\n\n\n\n\n\nddd" << endl;
    return 0;
}