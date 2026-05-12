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

//
bool isEmpty()
{
    return top == NULL;//
}
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n"; 
        cout << "4.exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push : ";
            cin >> value;
            stack.push(value);//
            break;
        case 2:
            if (!stack.isEmpty())
            {
                stack.pop();//pop the top element from the stack
            }
            else
            {
                cout << "Stack is Empty,cannot pop" << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peek();// get the value of the top element 
            }
            else
            {
                cout << "Stack is Empty, not top value" << endl;
            }
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        cout << endl;

    }

    return 0;
}; 