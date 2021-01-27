#include<iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2, i, j, k;
    int a[5][5], b[5][5], c[5][5];
    cout<<"Enter num of rows and columns of 1st matrix : ";
    cin>>r1 >>c1;
    cout<<"Enter a num of rows and columns of 2nd matrix : ";
    cin>>r2 >>c2;
    if (c1 != r2)
    {
        cout<<"Matrix can not be multiplied.....";
        exit(0);
    }
    cout<<"Enter a ele of 1st matrix : ";
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter a ele of 2nd matrix : ";
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
        
    }
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            for ( k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        
    }
    
    cout<<"Multiplication of matrix : ";
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        
    }
    return 0;
}