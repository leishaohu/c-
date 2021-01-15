#include <iostream>
using namespace std;

class calculator
{
private:
    /* data */
public:
    virtual int calculate()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};


class add: public calculator
{
    public:
    int calculate()
    {
        return m_Num1 + m_Num2;
    }
};

class sub: public calculator
{
    public:
    int calculate()
    {
        return m_Num1 - m_Num2;
    }
};

void test01()
{
    //多态使用条件，父类指针或引用指向子类对象
    calculator *abc = new add;
    abc->m_Num1 = 100;
    abc->m_Num2 = 121;
    cout << "a+b=" << abc->calculate() << endl;
    delete abc;

    abc = new sub;
    abc->m_Num1 = 101;
    abc->m_Num2 = 100;
    cout << "a-b=" << abc->calculate() << endl;
    delete abc;
}

int main()
{
    test01();
    system("pause");
}