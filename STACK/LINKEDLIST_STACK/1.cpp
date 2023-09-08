#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Stack
{
    Node* Top;
    public:
    Stack(){
        Top = nullptr;
    }
    
    void push(int value){
        Node* newnode = new Node;
        newnode->data= value;
        newnode->next= nullptr;
        if(Top==nullptr){
            Top= newnode;
        }
        else{
            Node* current = Top;
            newnode->data = value;
            newnode->next =current;
            Top= newnode;
        }
    }
void pop(){
    int x =-1;
    if(Top==nullptr){
        cout<< x;
    }
    else{
        Node* current  = Top;
        x = Top->data;
        Top= current->next;
        delete current;
        cout<< x;
        cout<<endl;

    }
}

void peek(int pos){
    Node* current = Top;
    int i=1;
    while(i<pos){
        current= current->next;
        i++;
    }
    cout<<current->data;
}

void display(){
    Node* current = Top;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current= current->next;
    }
    cout<<endl;
}

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.peek(2);

}