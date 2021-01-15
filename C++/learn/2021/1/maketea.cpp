#include <iostream>
using namespace std;

class MakeTea
{
private:
public:
    virtual Boil() = 0;
    virtual Pourin() = 0;
    virtual Brew() = 0;
    virtual Add() = 0;
    
    void maketea()
    {
    Boil();
    Pourin();
    Brew();
    Add();
    }
};

class coffe:public MakeTea
{
public:
    Boil()
    {
        cout << "煮水"<< endl;
    }
    Pourin()
    {
        cout << "倒入玻璃杯中" << endl;
    }
    Brew()
    {
        cout << "冲咖啡" << endl;
    }
    Add()
    {
        cout << "加入牛奶和糖" << endl;
    }
};

class tea:public MakeTea
{
public:
    Boil()
    {
        cout << "煮水"<< endl;
    }
    Pourin()
    {
        cout << "倒入茶杯中" << endl;
    }
    Brew()
    {
        cout << "冲茶叶" << endl;
    }
    Add()
    {
        cout << "加入枸杞" << endl;
    }
};

void makedrinking(MakeTea *abc)
{
    abc->maketea();
    delete abc;
}

int main()
{
    // tea a;
    // makedrinking(&a);
    // coffe b;
    // makedrinking(&b);
    makedrinking(new coffe);
    cout << "--------------------" << endl;
    makedrinking(new tea);
}