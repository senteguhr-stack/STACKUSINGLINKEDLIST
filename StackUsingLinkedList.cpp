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
