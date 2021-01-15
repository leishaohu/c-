#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }
    Person& AddPersonAge(Person p)
    {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test01()
{
    Person p1(10);
    Person p2(10);
    p2.AddPersonAge(p1).AddPersonAge(p2).AddPersonAge(p1);
    cout << p2.age << endl;
}
int main()
{
    test01();
    system("pause");
}