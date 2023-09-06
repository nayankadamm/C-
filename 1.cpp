//doubley linked list
#include<iostream>  
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
class doubley
{
    node *head;
    public:
    doubley()
    {
        head=NULL;
    }
    //create function
    void create(int n)
    {
        node *temp,*p;
        temp=new node
        temp->data=n;
        temp->next=NULL;
        temp->prev=NULL;
        
};