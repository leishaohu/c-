#pragma once
#include <iostream>
using namespace std;


class Point
{
// 行为
public:
    void set_X(int x);
    int get_X();
    void set_Y(int y);
    int get_Y();
    // 属性
private:
    int px;
    int py;
};