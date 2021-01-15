#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
    ofstream shuchu;
    shuchu.open("test01.txt", ios::out);
    shuchu << "zhangsan" << endl;
    shuchu << "man" << endl;
    shuchu << "18" << endl;
    shuchu.close();
}

int main()
{
    test01();
}