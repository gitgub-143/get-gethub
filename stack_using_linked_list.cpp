#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push()
{
    int val;
    struct node *newnode;
    newnode = new(struct node);
    cout<<"\n Enter a ele to be push in stack : ";
    cin>>val;
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (top == NULL)
    {
        cout<<"\n Stack underflow ";
    }
    else
    {
        cout<<"\n The poped ele is "<<top->data;
        top = top->next;
    }
    
}

void peek()
{
    if (top == NULL)
    {
        cout<<"\n Stack underflow";
    }
    else
    {
        cout<<"\n Top-most ele of stack is : "<<top->data;
    }
    
}

void display()
{
    struct node *ptr;
    if (top == NULL)
    {
        cout<<"\n Stack is empty ";
    }
    else
    {
        ptr = top;
        cout<<"Stack ele are : \t";
        while (ptr != NULL)
        {
            cout<<ptr->data;
            ptr = ptr->next;
        }
        
    }
    
}

int main()
{
    int ch;
    do
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Peek"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            cout<<"\n Invalid choice....!\n ";
            break;
        }
    } while (ch != 5);
    return 0;
}