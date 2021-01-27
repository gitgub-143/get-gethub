#include<iostream>
using namespace std;

int stack[20], n = 20, top = -1;

void push()
{
    int val;
    if (top >= n - 1)
    {
        cout<<"\n Stack Overflow.....";
    }
    else
    {
        cout<<"Enter the elements to be pushed : ";
        cin>>val;
        top++;
        stack[top] = val;
    }
    
}

void pop()
{
    if (top <= -1)
    {
        cout<<"\n Stack Underflow...";
    }
    else
    {
        cout<<"The popped elements is : " <<stack[top];
        top--;
    }
    
}

void display()
{
    if (top <= -1)
    {
        cout<<"\n Stack Underflow...";
    }
    else
    {
        cout<<"Stack elements are : "; for (int i = top; i >= 0; i--)
        {
            cout<<" "<<stack[i];
        }
    }
    
}

int main()
{
    int ch, val;
    do
    {
        cout<<"\n 1. Push \n 2. Pop \n 3. Display \n 4. exit \n ";
        cout<<"\n Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1 : push();
            break;
        case 2 : pop();
            break;
        case 3 : display();
            break;
        case 4 :
                cout<<"\n Exit";
                break;
        default:
                cout<<"\n Invalid choice....";
                break;
        }
    } 
    while (ch!=4);
    return 0;
}