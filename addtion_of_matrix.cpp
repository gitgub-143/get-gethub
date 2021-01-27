#include<iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], sum[5][5], i, j, c, r;
    cout<<"Enter a num of rows : ";
    cin>>r;
    cout<<"Enter a num of columns : ";
    cin>>c;
    cout<<"Enter a ele of 1st matrix : \t";
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter a ele of 2nd matrix : \t";
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }
    cout<<"Addition of matrix : ";
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cout<<"\t" <<sum[i][j];
        }
        
    }
    return 0;
}