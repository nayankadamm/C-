#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

};
class L_list{
    private:
    Node* head;
    public:
    L_list(){
        head = nullptr;  
    }

    void insert(int value){
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;

        if(head==nullptr){
            head = newnode;
        }
        else{
            Node* current = head;
            while(current->next!=nullptr){
                current= current->next;
            }
            current->next = newnode;
        }
    }

    void display(){
        Node* current = head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current= current->next;
        }
        cout<<endl;
    }


};
int main(){
    L_list l;
    l.insert(10);
     l.insert(11);
      l.insert(12);
       l.insert(13);
       l.display();
       
        

    
    


}