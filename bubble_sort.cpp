#include<iostream>
using namespace std;

int main()
{
    int a[50], size, i, j, temp;
    cout<<"\n Enter size of array :";
    cin>>size;
    for (i = 0; i < size; i++)
    {
        cout<<"\n Enter the array elements" << i+ 1 << ":";
        cin>>a[i];
    }
    for (i = 1; i < size; i++)
    {
        for (j = 0; j < (size - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            
        }
    }
    cout<<"Array after bubble sort :";
    for (i = 0; i < size; i++)
    cout<<"->" <<a[i];
    return 0;
}