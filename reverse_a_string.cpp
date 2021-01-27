#include<iostream>
#include<string.h>
using namespace std;
#define size 20

int top = -1;
char stack[size];

void push(char ch)
{
    if (top == size - 1)
        cout<<"\n Stack Overflow...";
    else
        stack[++top] = ch;
    
}

char pop()
{
    if (top == -1)
        cout<<"\n Stack Underflow....";
    else
        return stack[top--];
    
}

int main()
{
    char str[20];
    int i;
    cout<<"Enter a string : ";
    cin>>str;
    for ( i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for ( i = 0; i < strlen(str); i++)
    {
        str[i] = pop();
    }
    cout<<"Reversed string is : "<<str;
}