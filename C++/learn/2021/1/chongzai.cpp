#include <iostream>
using namespace std;


class MyInteger
{

    friend ostream &operator<<(ostream& cout, MyInteger p);
    friend void test01();

public:
MyInteger(int num)
{
    m_Num = num;
}

MyInteger& operator++()
{
    ++m_Num;
    return *this;
}

MyInteger operator++(int)
{
    MyInteger temp = *this;
    m_Num++;
    return temp;
}

private:
    int m_Num;
};//类后面是要加分号的

ostream& operator<<(ostream& cout ,MyInteger p )
{
    cout << p.m_Num;
    return cout;
}
void test01()
{
    MyInteger n1(10);
    cout << ++n1 << endl;
    MyInteger n2(20);
    cout << n2++ << endl;
    cout << n2 << endl;
}

int main()
{
    test01();
    system("pause");
}