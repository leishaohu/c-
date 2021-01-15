#include"before.h"


int main()
{
    int arr[] = {3, 5, 4, 1512, 9, 1, 2, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    swap(arr, len);
    iprint(arr, len);
    return 0;
}

void swap(int *p , int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len -i-1; j++)
        {
            if (p[j]>p[j+1])
            {
                int temp = p[j+1];
                p[j + 1] = p[j];
                p[j] = temp;
            }
        }
    }
}

void iprint(int *arr,int len)
{
    for (int i = 0; i < len;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}