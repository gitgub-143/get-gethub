#include<iostream>
using namespace std;

// A function implementing shell sort
void shell_short(int a[], int n)
{
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap = gap/2)
    {
        for ( i = gap; i < n; i++)
        {
            for ( j = i - gap; j >= 0; j = j-1)
            {
                // If value at higer index is greater.
                if (a[j + gap] >= a[j])
                {
                    break;
                }
                else
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + gap] = temp;
                }
                
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
        cout<<"\n Enter the elements" <<i + 1<<":";
        cin>>a[i];
    }

    shell_short(a, size);
    cout<<"sorted array :";
    for ( i = 0; i < size; i++)
        cout<<"->" <<a[i];
    return 0;
}