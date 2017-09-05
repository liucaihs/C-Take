//
// Created by jinhan on 17-9-5.
//
/*
 *  C++ 第二课
 *
 * */

#include <iostream>

using namespace std;

// 变量声明
/*
 *

    在函数或一个代码块内部声明的变量，称为局部变量。

    在函数参数的定义中声明的变量，称为形式参数。

    在所有函数外部声明的变量，称为全局变量。


 * */
extern int a, b;
extern int c;
extern float f;
extern int out;
int out1 = 1;

// 函数声明
int func();

int main() {

//    cout << out << endl; // 这样是不对的，因为声明后没定义
    cout << out1 << endl; // 全局变量有初始值

    // 局部变量没有初始值
    char temp;
    double temp1;
    cout << "temp char:" << temp << " double:" << temp1 << endl;

    // 这里就是全局变量了，全局变量被改了
    out1 = 333333333;
    cout << "main out1:" << out1 << endl;
    func();

    // 全局变量会被局部覆盖，因为使用了int
    int out1 = 3;
    cout << "main out1:" << out1 << endl;
    func(); // 这里面还是333333333


    // 这个是全局变量申明的定义，不是局部变量
//    out = 4;  // 这样不对，未定义
    int out = 4;
    cout << "main out:" << out << endl;



    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0 / 3.0;
    cout << f << endl;

    return 0;
}


// 函数定义
int func() {
    cout << "func out1:" << out1 << endl;
//    cout << out << endl;  // 未定义，需要定义/**/
    return 0;
}