//
// Created by jinhan on 17-9-6.
//
/*
 * C++ 第三课
 *
 * */

#include <iostream>

using namespace std;

/*
 *
define – 在预处理阶段进行替换
const – 在编译时确定其值

 define – 无类型，不进行类型安全检查，可能会产生意想不到的错误
const – 有数据类型，编译时会进行类型检

 define – 不分配内存，给出的是立即数，有多少次使用就进行多少次替换，在内存中会有多个拷贝，消耗内存大
const – 在静态存储区中分配空间，在程序运行过程中内存中只有一个拷贝

 在编译时， 编译器通常不为const常量分配存储空间，而是将它们保存在符号表中，这使得它成为一个编译期间的常量，没有了存储与读内存的操作，使得它的效率也很高。
宏替换只作替换，不做计算，不做表达式求解。

 宏定义的作用范围仅限于当前文件。
默认状态下，const对象只在文件内有效，当多个文件中出现了同名的const变量时，等同于在不同文件中分别定义了独立的变量。
如果想在多个文件之间共享const对象，必须在变量定义之前添加extern关键字（在声明和定义时都要加）。
 *
 * */
// 预处理器
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main() {
    cout << "Hello\tWorld\n\n";

    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;


    const int v = 3;
    cout << v << endl;
    return 0;
}