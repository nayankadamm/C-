#include <iostream>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *arr;
};
bool isEmpty(struct Stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(struct Stack *s)
{
    if (s->top == s->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(struct Stack *s, int data)
{
    if (isFull(s))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}
void pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        s->top--;
    }
}
void peek(struct Stack *s, int pos)
{
    if (s->top - pos + 1 < 0)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        cout << s->arr[s->top - pos + 1] << endl;
    }
}
void stackTop(struct Stack *s)
{
    cout << s->arr[s->top] << endl;
}
void stackBottom(struct Stack *s)
{
    cout << s->arr[0] << endl;
}

void display(struct Stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    struct Stack s;
    cout << "ENter the size of the stack" << endl;
    cin >> s.size;
    s.arr = new int[s.size];
    s.top = -1;
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    pop(&s);

    display(&s);
}