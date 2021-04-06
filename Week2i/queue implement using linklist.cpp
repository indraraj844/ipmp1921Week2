
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
struct node *front=NULL,*rear=NULL;
 void enqueue(int x)
 {
     node* temp=new node();
     temp->data=x;
     temp->next=NULL;
     if(front==NULL)
     {
         front =rear=temp;
     }
     else
     {
         rear->next=temp;
         rear=temp;
     }

 }
 int dequeue()
 {
     if(front==NULL)
     {
         cout<<"queue is empty";
         return -1;
     }
     node* temp=front;
     front=front->next;
     int x=temp->data;
     free(temp);
     return x;

 }
 void printlist()
 {
     node* temp=front;
     while(temp)
     {
         cout<<temp->data<<"->";
         temp=temp->next;
     }
 }

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(34);
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    printlist();
    return 0;


}