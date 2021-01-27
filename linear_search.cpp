#include<iostream>
using namespace std;

int main()
{
    int a[10], size, x, i, flag = 0;
    cout<<"\n Enter the size of array : ";
    cin>>size;
    for ( i = 0; i < size; i++)
    {
        cout<<"\n Enter a elements of array"<<i + 1<<": ";
        cin>>a[i];
    }
    cout<<"\n Enter a elements to serach : ";
    cin>>x;

    for (i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout<<"\n Element is found at position : "<<i + 1;
    }
    else
    {
        cout<<"\n Element not found .....";
    }
    return 0;
    
}
