#include <iostream>
using namespace std;

//node 
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//Stack Class
class stack
{
private:
    Node *top; //
    
public:
    stack()
    {
        top = NULL;
    }
    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value" << value << endl;
        return value;
    }

    //
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }

        Node *temp = top;
        top = top->next;
        cout << "Popped value : " << top->data << endl;
    }

    //
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
