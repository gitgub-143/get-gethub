#include<iostream>
using namespace std;

int queue[5], n = 5, front = - 1, rear = - 1;

void enque()
{
    int val;
    if (rear == n - 1)
        cout<<"\n Queue Overflow";
    else
    {
        if (front == - 1)
            front = 0;
            cout<<"Insert the ele in queue : ";
            cin>>val;
            rear++;
            queue[rear] = val;
    
    }
    
}

void deque()
{
    if (front == - 1 || front > rear)
    {
        cout<<"\n Queue Overflow.....";
        return ;
    }
    else
    {
        cout<<"\n Ele deleted from queue is : "<<queue[front];
        front++;
    }
    
}

void display()
{
    if (front == - 1)
        cout<<"\n Queue is empty....";
    else
    {
        cout<<"\n Queue ele are : ";
        for (int i = front; i <= rear; i++)
            cout<<queue[i]<<" ";
            cout<<endl;
    }
    
}

int main()
{
    int ch;
    do
    {
        cout<<"\n 1. Insert \n 2. Delet \n 3. display \n 4. Exit \n";
        cout<<"\n Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1 : 
            enque();
            break;
        case 2 :
            deque();
            break;
        case 3 :
            display();
            break;
        case 4 :
            cout<<"\n Exit";
            break;
        default:
            cout<<"\n Invalid choice....!";
            break;
        }
    } while (ch != 4);
    return 0;
}