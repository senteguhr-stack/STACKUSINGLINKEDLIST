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
