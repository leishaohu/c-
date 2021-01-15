#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;


// class Point
// {
// // 行为
// public:
//     void set_X(int x)
//     {
//         px = x;
//     }
//     int get_X()
//     {
//         return px;
//     }
//     void set_Y(int y)
//     {
//         py = y;
//     }
//     int get_Y()
//     {
//         return py;
//     }
//     // 属性
// private:
//     int px;
//     int py;
// };

// class Circle
// {
// private:
//     int radium=0;
//     Point center;

// public:
//     void set_radium(int x)
//     {
//         radium = x;
//     }

//     int get_radium()
//     {
//         return radium;
//     }

//     void set_center(Point &x)
//     {
//         center = x;
//     }
// };






int main()
{
    Point p1;
    Point p2;
    Circle c1;
    p1.set_X(10);
    p1.set_Y(11);
    p2.set_X(10);
    p2.set_Y(0);
    c1.set_center(p2);
    c1.set_radium(10);

    int d1 = (p1.get_X() - p2.get_X()) * (p1.get_X() - p2.get_X()) +
         (p1.get_Y() - p2.get_Y()) * (p1.get_Y() - p2.get_Y());
    int d2 = c1.get_radium() * c1.get_radium();
    if (d1==d2)
    {
        cout << "点在圆上" << endl;
    }
    else if(d1<d2)
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}