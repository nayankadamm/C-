#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int Rear;
    int *Q;

};

void enQueue(Queue *q,int value){
    //lets check if the queue is full or not
    if(q->Rear==q->size-1){
        cout<<"Queue is full";
    }
    else{
        q->Rear++;
        q->Q[q->Rear]=value;
    }
}

void deQueue(Queue* q){
    int x=-1;
    if(q->Rear==q->front){
        cout<<"Queue is empty";
    }
    else{
        q->front++;
        x = q->Q[q->front];
       

    }
     cout<<x<<endl;
}


int main()
{
    struct Queue Q ;
    cout<<"Enter the size of the queue::";
    cin>>Q.size;

    Q.Q = new int[Q.size];
    Q.front = -1;
    Q.Rear= -1;
    enQueue(&Q,2);
     enQueue(&Q,4);
      enQueue(&Q,5);
       enQueue(&Q,6);
       deQueue(&Q);
       deQueue(&Q);






}