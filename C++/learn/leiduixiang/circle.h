#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
private:
    int radium=0;
    Point center;

public:
    void set_radium(int x);

    int get_radium();

    void set_center(Point &x);
};