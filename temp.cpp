#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *pre;
};
class dList
{
private:
    Node *head;

public:
    dList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newnode = new Node;
        newnode->next = nullptr;
        newnode->pre = nullptr;
        newnode->data = value;

        if (head == nullptr)
        {
            head = newnode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newnode;
            newnode->pre = current;
        }
    }
    void insertHead(int value)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->pre = nullptr;
        newnode->next = head;
        head = newnode;
    }

    void insertTail(int value)
    {
        Node *newnode = new Node;
        newnode->next = nullptr;
        newnode->pre = nullptr;
        newnode->data = value;
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newnode;
        newnode->pre = current;
    }

    void insertAt(int value, int pos)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->pre = nullptr;
        newnode->next = nullptr;

        Node *current = head;
        int i = 1;
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        newnode->next = current->next;
        current->next = newnode;
        newnode->pre = current;
    }
};