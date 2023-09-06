//circular singley linked list
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class cList{
    private:
    Node* head;
    public:
    cList(){
        head=nullptr;
    }
    void insert(int value){
        Node* newnode = new Node;
        newnode->data=value;
        newnode->next=nullptr;
        if(head==nullptr)
        {
            head= newnode;
            newnode->next=head;
        }
        else 
        {
            Node* current = head;
            while(current->next!=head){
                current=current->next;
            }
            current->next=newnode;
            newnode->next=head;
        }
    }

    void display(){
        Node* current = head;
        if(head==nullptr){
            cout<<"List is empty"<<endl;
        }
        else{
            while(current->next!=head){
                cout<<current->data<<" ";
                current=current->next;
            }
            //cout<<current->data<<endl;
        }
    }

    //function to delete the node
    void deleteNode(int value){
        Node* current = head;
        Node* previous = nullptr;

            //deleting the head node
        if(current->data==value)
        {
            while(current->next!=head)
            {
                current=current->next;
            }
            current->next=head->next;
            delete head;
            head=current->next;
        }
        else
        {
            if(head==nullptr){
            cout<<"List is empty"<<endl;
        }
        else{
            while(current->data!=value){
                previous=current;
                current=current->next;
            }
            previous->next=current->next;
            delete current;
        }
        }        
    }
};
int main(){
    cList obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.insert(5);
    obj.display();
    cout<<endl;
    obj.deleteNode(1);
    obj.display();
}

