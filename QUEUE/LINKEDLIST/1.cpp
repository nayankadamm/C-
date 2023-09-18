#include<iostream>
using namespace std;
struct Queue{
    int data;
    Queue* next;

};
class Queue_List{
    private:
    Queue* head;
    public:
   Queue_List(){
    head = nullptr;
   }
    void enqueue(int value)
    {
        Queue* newnode = new Queue;
        newnode->data = value;
        newnode->next = nullptr;
        if(head==nullptr){
            head= newnode;
        }
        else{
            Queue* current = head;
            while(current->next!=nullptr){
                current = current->next;
            }

            current->next = newnode;
            newnode->next = nullptr;
            
        }
    }

    void dequeue(){
        Queue* current= head;
        head = current->next;
        delete current;
    }
    void display(){
        Queue* current = head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};
int main(){

    Queue_List l;
    l.enqueue(4);
    l.enqueue(5);
    l.enqueue(6);
    l.enqueue(7);
    l.enqueue(8);
    l.display();
    l.dequeue();
    l.display();


}