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
    
    void push(char value){
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
    
   
        Node* current  = Top;
  
        Top= current->next;
        delete current;
        
        

    
}

int isBalanced(char *exp){
    int i=0;
    for( i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')'){
            if(Top==nullptr){
                return 0;
            }
            pop();
        }
    }
    if(Top==nullptr){
        return 1;

    }
    else{
        return 0;
    }
}



};

int main()
{
    Stack s;
    char exp[] = "((a+b)*c-d))";
    cout<<s.isBalanced(exp)<<endl;
   

}