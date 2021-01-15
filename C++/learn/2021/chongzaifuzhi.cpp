#include <iostream>
using namespace std;

class Person
{
public:
    friend void test01();
    Person(int age)
    {
        m_age =new int(age);
    }

    Person& operator=(Person &p)
    {
        if (m_age!=NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        
        m_age = new int(*p.m_age);
        return *this;
    }
    ~Person()
    {
        if (m_age !=NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }

private : 
    int *m_age;
};


void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;
    cout << *p1.m_age << endl;
    cout << *p2.m_age << endl;
    cout << *p3.m_age << endl;
}

int main()
{
    test01();
    system("pause");
}