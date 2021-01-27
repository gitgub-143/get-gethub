#include<iostream>
using namespace std;

int main()
{
    int arr[50], size, i, j, temp;
    cout<<"enter a size of array : \n";
    cin>>size;
    cout<<"Enter a elements of array : \n";
    for(i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    j = i -1;            // j will point to the last element
    i = 0;               // i will point to the first element
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout<<"\n Now the reverse of the array is :";
    for(i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    
}