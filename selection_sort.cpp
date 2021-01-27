#include<iostream>
using namespace std;

void selection_sort(int a[10], int size)
{
    int i, j, temp;
    for ( i = 0; i < size; i++)
    {
       for (j = i +1; j < size; j++)
       {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
       }
    }    
}

int main()
{
    int size, i;
    cout<<"\n Enter a size of array :";
    cin>>size;

    int a[size];
    for ( i = 0; i < size; i++)
    {
        cout<<"\n Enter the elements :";
        cin>>a[i];
    }
    selection_sort(a, size);
    cout<<"sorted elements :";
    for ( i = 0; i < size; i++)
    {
        cout<<"->"<<a[i];
    }
    
    return 0;
}