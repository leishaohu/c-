#include<iostream>
using namespace std;
#include<string>
#include<Ctime>

struct Student 
{
    string name;
    int score;
};

struct Teacher
{
    string name;
    Student stu[5];
};

void allocate(struct Teacher arr[],int len)
{
    string name = "ABCDE";
    for (int i = 0; i < len;i++)
    {
        arr[i].name = "Teacher_";
        arr[i].name += name[i];
        for (int j = 0; j < 5;j++)
        {
            arr[i].stu[j].name = "student";
            arr[i].stu[j].name += name[j];
            int random = rand() % 61 + 40;
            arr[i].stu[j].score = random;
        }

    }
}


void sort(struct Teacher arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 5-1; i++)
        {
            for (int k = 0; k <5-1-j; k++)
            {
                if (arr[i].stu[k].score > arr[i].stu[k + 1].score)
                {

                    Student temp = arr[i].stu[k];
                    arr[i].stu[k] = arr[i].stu[k + 1];
                    arr[i].stu[k + 1] = temp;
                    }
            }
        }
    }
}

void printarr(struct Teacher arr[],int len)
{
    for (int i = 0; i < len;i++)
    {
        cout << "teacher's name" << arr[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tstudent's name: " << arr[i].stu[j].name
                 << "\tstudent's score" << arr[i].stu[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    Teacher tea[3];
    int len = sizeof(tea) / sizeof(tea[0]);
    allocate(tea, len);
  //  sort(tea, len)            ;
    printarr(tea, len);

    return 0;
}