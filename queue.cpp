#include<iostream>
using namespace std;
int pos=-1;
class Queue
{
    int arr[5];
    public:
    void enQueue(int val)
    {
        if(pos<5)
        {
            pos++;
            arr[pos]=val;
            cout<<"Value Inserted"<<endl;
        }
        else{
            cout<<"Array full";
        }
    }
    void deQueue()
    {
        int start=0;
        if(pos>=0)
        {
            for(int i=start;i<pos;i++)
            {
                arr[i]=arr[i+1];
            }
            pos--;
        }
        else
        {
            cout<<"NO Element";
        }
    }
    void Display()
    {
        if(pos>=0)
        {
            cout<<"Array is:";
            for(int i=0;i<=pos;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<"Array is empty"<<endl;
        }
    }
};
int main()
{
    int n;
    for(int i=0;i<7;i++)
    {
    cout<<"\nEnter the follow:"<<endl;
    cout<<" 1.Enqueue"<<endl;
    cout<<" 2.Dequeue"<<endl;
    cout<<" 3.Exit"<<endl;
    cout<<"Enter Choice:";
    cin>>n;
    Queue q;
    if(n==1)
    {
        int value;
        cout<<"Enter Value: ";
        cin>>value;
        q.enQueue(value);
    }
    else if(n==2)
    {
       q.deQueue();
    }
    else if(n==3)
    {
        cout<<".....Code Exited....."<<endl;
        cout<<".....Thank You.....";
        break;
    }
    else if(n==4)
    {
        q.Display();
    }
    else{
        cout<<"Invalid Input !!";
    }
    }
}
