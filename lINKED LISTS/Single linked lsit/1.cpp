#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class LinkedList
{
    private:
    Node* head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int value){
        //created pointer for new node
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;

        //if the list is empty
        if(head==nullptr)
        {
            head= newnode;
        }        

        else{
            Node* current = head;
            while(current->next!=nullptr){
                current = current->next;
            }
            current->next = newnode;
        }
    }
    //insert at head
    void insertHead(int value)
    {
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }
    //insert at tail
    void insertTail(int value)
    {
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        Node* current = head;
        while(current->next!=nullptr){
            current = current->next;
        }
        current->next = newnode;
    }
    //insert at specific position
    void insertAt(int value,int position)
    {
        //making the new node with value which have to insert
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        //assigning head as current node pointer
        Node* current = head;
        int i=1;
        //iterating until current node pointer reach to position which needs to insert
        while(i<position-1){
            current = current->next;
            i++;
        }
        
        newnode->next = current->next;
        current->next = newnode;
    }
    
    //delete at specific position
    void deleteNode(int value)
    {
        Node* current = head;
        Node* previous = nullptr;
        while(current!=nullptr){
            if(current->data==value)
            {
                if(previous==nullptr)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                delete current;
            return;
            }
            //if the value is not found
            previous = current;
            current = current->next;

        }
    }

    //delete head of the node 
    void deleteHead()
    {
        Node* newnode = head;
        head = head->next;
        delete newnode;
    }

    //delete tail of the node
    void deleteTail()
    {
        Node* current = head;
        Node* previous = nullptr;
        while(current->next!=nullptr){
            previous = current;
            current = current->next;
        }
        previous->next = nullptr;
        delete current;
    }
//delete node at specifi index
    void deleteAt(int position)
    {
        Node* current = head;
        Node* previous = nullptr;
        int i=1;
        while(i<position){
            previous = current;
            current = current->next;
            i++;
        }
        previous->next = current->next;
        delete current;
    }

    void display()
    {
        Node* current = head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l;
    l.insert(4);
    l.insert(5);
    l.insert(6);
   cout<<"total entries:";l.display();
    l.insertHead(7);
   cout<<"insert at head:";l.display();
    l.insertTail(8);
   cout<<"Insert at tail:"; l.display();
    l.insertAt(9,2);
   
   cout<<"Insert at any position:"; l.display();
    l.deleteNode(5);
    
   cout<<"delete node at specific point:"; l.display();
    l.deleteHead();

   cout<<"delet head:"; l.display();
    l.deleteTail();
    cout<<"delete tail:";
     l.display();
    l.deleteAt(2);
    cout<<"delete at specific position:";
     l.display();
}