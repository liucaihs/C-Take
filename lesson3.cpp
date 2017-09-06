//
// Created by jinhan on 17-9-6.
//
/*
 * C++ 第三课
 *
 * */

#include <iostream>

using namespace std;

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


    // 区别参考：http://blog.csdn.net/yingyujianmo/article/details/51206460
    const int v = 3;
    cout << v << endl;
    return 0;
}