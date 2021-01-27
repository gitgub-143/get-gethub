// Binary Search

#include<iostream>
using namespace std;

int binary_serach(int a[], int size, int data)
{
    int first, mid, last;
    first = 0;
    last = size - 1;

    while (first <= last)
    {
        mid =(first + last)/2;
        if(data == a[mid])
            return (mid);
        else
        {
            if (data > a[mid])
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
            
        }
        
    }
    return -1;
}

int main()
{
    int binary_serach(int a[], int, int);
    int size, i, a[20], data, res;
    cout<<"\n Enter a size :";
    cin>>size;
    for ( i = 0; i < size; i++)
    {
        cout<<"\n Enter a data "<<i + 1<< ": ";
        cin>>a[i];
    }
    
    cout<<"\n Enter  a data to serach : ";
    cin>>data;

    res = binary_serach(a, size, data);

    if (res != -1)
        cout<<"\n Data found at position"<<res + 1;
    else
    {
        cout<<"\n Data not found.........!";
    }
    return 0;
}