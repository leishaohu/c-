#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

struct person
{
    string m_Name;
    int m_Sex;
    int m_Age=0;
    string m_Phone;
    string m_Address;
};
struct addressbook
{
    struct person m_person[MAX];
    int m_size=0;
};

void showmenu()
{

    cout << "*************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}

void addperson(struct addressbook *notebook)
{
    if (notebook->m_size==MAX)
    {
        cout << "通讯录已满" << endl;
        return;
    }
    else
    {
        //xingming
        cout << "请输入姓名： " << endl;
        string name;
        cin >> name;
        notebook->m_person[notebook->m_size].m_Name = name;
        //xingbie
        cout << "请输入性别：  " << endl;
        cout << "1---男" << endl;
        cout << "2---女" << endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if(sex==1||sex==2)
            {
                notebook->m_person[notebook->m_size].m_Sex = sex;
                break;
            }
        };
        //nianling
        int age = 0;
        cout << "请输入年龄： " << endl;
        cin >>age;
        notebook->m_person[notebook->m_size].m_Age = age;

        //dianhua
        string phone;
        cout << "请输入电话： " << endl;
        cin >> phone;
        notebook->m_person[notebook->m_size].m_Phone = phone;

        //dihzi
        string address;
        cout << "请输入地址： " << endl;
        cin >> address;
        notebook->m_person[notebook->m_size].m_Address = address;

        notebook->m_size++;
        cout << "添加成功" << endl;

    }
        // system("pause");
        // system("clear"); //清理屏幕
}

void showperson(struct addressbook *notebook)
{
    if (notebook->m_size==0)
    {
        cout << "通讯录里面没有人" << endl;
    }
    else
    {
        for (int i = 0; i < notebook->m_size; i++)
        {
           
        cout << "姓名： "<<notebook->m_person[i].m_Name << "\t";
        cout << "性别： "<< (notebook->m_person[i].m_Sex==1?"男":"女")<< "\t";
        cout << "年龄："<< notebook->m_person[i].m_Age<< "\t";
        cout << "电话："<<notebook->m_person[i].m_Phone << "\t";
        cout << "地址： "<<notebook->m_person[i].m_Address<< endl;

        }
        
    }
    
    
}

//检测通讯录种是否有此人
int test(struct addressbook *notebook, string name)
{
    for (int i = 0; i < notebook->m_size; i++)
    {
        if (notebook->m_person[i].m_Name == name)
        {
            return i;
       }
    }

       cout << "查无此人" << endl;
       return -1;
}
//删除联系人
void DeletePerson(struct addressbook *notebook)
{
    cout << "请输入要删除的人的姓名：" << endl;
    string name;
    cin >> name;
    int ret = test(notebook, name);
    if (ret!=-1)
    {
        for (int i = ret; i < notebook->m_size; i++)
        {
            notebook->m_person[i] = notebook->m_person[i + 1];
        }
        cout << "删除成功" << endl;
        notebook->m_size--;
    }
}

//查找联系人
void FindPerson(struct addressbook *notebook)
{
    cout << "请输入要查找的联系人姓名" << endl;
    string name;
    cin >> name;
    int ret=test(notebook, name);
    if (ret != -1)
    {
        cout << "姓名： "<<notebook->m_person[ret].m_Name << "\t";
        cout << "性别： "<< (notebook->m_person[ret].m_Sex==1?"男":"女")<< "\t";
        cout << "年龄："<< notebook->m_person[ret].m_Age<< "\t";
        cout << "电话："<<notebook->m_person[ret].m_Phone << "\t";
        cout << "地址： "<<notebook->m_person[ret].m_Address<< endl;
    }
    
}


//修改联系人
void AmendPerson(struct addressbook *notebook)
{
    cout << "请输入要修改的联系人姓名" << endl;
    string name;
    cin >> name;
    int ret=test(notebook, name);
    if (ret != -1)
    {
              //xingming
        cout << "请输入姓名： " << endl;
        string name;
        cin >> name;
        notebook->m_person[ret].m_Name = name;
        //xingbie
        cout << "请输入性别：  " << endl;
        cout << "1---男" << endl;
        cout << "2---女" << endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if(sex==1||sex==2)
            {
                notebook->m_person[ret].m_Sex = sex;
                break;
            }
        };
        //nianling
        int age = 0;
        cout << "请输入年龄： " << endl;
        cin >>age;
        notebook->m_person[ret].m_Age = age;

        //dianhua
        string phone;
        cout << "请输入电话： " << endl;
        cin >> phone;
        notebook->m_person[ret].m_Phone = phone;

        //dihzi
        string address;
        cout << "请输入地址： " << endl;
        cin >> address;
        notebook->m_person[ret].m_Address = address;
        cout << "修改成功" << endl;
    } 
}


void Swept(struct addressbook *notebook)
{
    cout << "确定要清空吗" << endl;
    cout << "1---确认" << endl;
    cout << "2---取消" << endl;
    int i = 0;
    cin >> i;
    if (i==1)
    {
        notebook->m_size = 0;
        cout << "清空成功" << endl;
    }
    else
    {
        return;
    }
    
    
}
 int main()
{
    int select = 0;
    struct addressbook notebook;

    while (true)
    {
        showmenu();
        cin >> select;
        switch (select)
        {
        case 1 :
            addperson(&notebook);
            break;
        case 2 :
            showperson(&notebook);
            break;
        case 3 :
            DeletePerson(&notebook);
            break;
        case 4 :
            FindPerson(&notebook);
            break;
        case 5 :
            AmendPerson(&notebook);
            break;
        case 6 :
            Swept(&notebook);
            break;
        case 0 :
            cout << "quit the system" << endl;
            system("pause");
            return 0;
            break;
        }
    }
    
    system("pause");
    return 0;
}