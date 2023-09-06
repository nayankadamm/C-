#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* pre;
};
class doubley
{
    private:
    Node* head;
    public:
    doubley()
    {
        head= nullptr;
    }

    void insert(int value)
    {
        Node* newnode = new Node;
        newnode->data= value;
        newnode->next = nullptr;
        newnode ->pre=nullptr;
        if(head== nullptr)
        {
            head = newnode;
        }
        else{
            Node* current = head;
            while(current->next!=nullptr)
            {
                current = current->next;
            }
            current->next = newnode;
            newnode->pre = current;
        }
    }
    //insert at head
   void insertAthead(int value)
   {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = head;
    newnode->pre= nullptr;
    head = newnode;
   }
   //insert at tail
    void insertAtTail(int value)
    {
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        newnode->pre = nullptr;
       
            Node* current = head;
            while(current->next!=nullptr)
            {
                current = current->next;
            }
            current->next = newnode;
            newnode->pre = current;
        
    }

    void insertAt(int value,int pos)
    {
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        newnode->pre = nullptr;
        int i=1;
        Node* current = head;
        while(i<pos-1)
        {
            current = current->next;
            i++;
        }
        newnode->next = current->next;
        current->next = newnode;
        newnode->pre = current;
    }
    void deleteNode(int value)
    {
        Node* current = head;
        Node* previous = nullptr;
        while(current!=nullptr){
            if(current->data==value)
            {
                if(current->pre==nullptr){
                    head = current ->next;

                }
                else{
                    previous->next =current->next;
                    current->next->pre = current->pre;
                }
                delete current;
                return;
            }
            previous= current;
            current= current->next;
        }
    }

    void deletAt(int pos){
        Node* current = head;
        Node* previous = nullptr;
        int i=1;
        if(pos==1){
            head = current->next;
        }
        else{
            while(i<pos)
        {
            previous = current;
            current = current->next;
            i++;
        }
        previous->next = current->next;
        current->next->pre = previous;
        
        }
        delete current;
    }

    //delete head
    void deleteHead(){
        Node* current = head;
        head = current->next;
        delete current;
    }

    //delete tail
    void deleteTail(){
        Node* current = head;
        Node* previous = nullptr;
        while(current->next!=nullptr)
        {
            previous = current;
            current = current->next;
        }
        previous->next = nullptr;
        delete current;
    }
    void display()
    {
        Node* current = head;
        while(current!=nullptr)
        {
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};
int main()
{
    doubley d;
   for(int i=1;i<=5;i++)
   {
        d.insert(i);
   }
    d.display();
    d.insertAthead(0);
    d.display();
    d.insertAtTail(6);
    d.display();
    d.insertAt(10,3);
    d.display();
    d.deleteNode(2);
    d.display();
    d.deletAt(2);
    d.display();
    d.deleteTail();
    d.display();
    return 0;
}