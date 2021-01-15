#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:

Phone(string name)
{
    cout << "This is phone's gouzao function" << endl;
    m_PName = name;
}
    string m_PName;

    ~Phone()
    {
        cout << "这是phone的析构函数" << endl;
    }
};

class Person 
{
    public:
    Person(string name,string m_PName):m_Name(name),m_Phone(m_PName)
    {
        cout << "This is person's gouzao function" << endl;

    }
        string m_Name;
        Phone m_Phone;
        ~Person()
        {
            cout << "This is Person's xigou function" << endl;
        }
};

void test01()
{
    Person p1("zhangsan","iphone");
    cout << p1.m_Name << "手机为:" << p1.m_Phone.m_PName << endl;
}
int main()
{
    test01();
    system ("pause");
};
