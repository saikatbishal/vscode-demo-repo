#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head;
Node* GetNewNode(int x)
{
    Node *NewNode = new Node;
    NewNode->data = x;
    NewNode->prev = NULL;
    NewNode->next = NULL;
    return NewNode;
}
void InsertAtHead(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    newNode->prev = NULL;
    if(head!=NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}
void InsertAtEnd(int x)
{
    Node *temporary_variable = new Node;
    temporary_variable->data = x;
    Node *temporary_variable2 = head;
    while (temporary_variable2->next!=NULL)
    {
        temporary_variable2 = temporary_variable2->next;
    }
    temporary_variable2->next = temporary_variable;
    temporary_variable->prev = temporary_variable2;
    temporary_variable->next = NULL;
}
void Print()
{
    Node *temporary_variable = head;
    while(temporary_variable != NULL)
    {
        if(temporary_variable!=head)
        {
            cout << temporary_variable->prev->data << ",";
        }
        else
            cout << "NULL, ";
        cout << temporary_variable->data << ",";
        cout << temporary_variable->next->data << ",";
        cout << " -> ";
        temporary_variable = temporary_variable->next;
    }
    cout << endl;
}
int main()
{
    InsertAtHead(1);//1
    InsertAtHead(2);//2 1
    InsertAtHead(3);//3 2 1
    InsertAtHead(5);//5 3 2 1
   // Print();
    InsertAtHead(0);//0 5 3 2 1
    //Print();
    InsertAtEnd(34);//0 5 3 2 1 34
    InsertAtEnd(22);//0 5 3 2 1 34 22
    Print();
    return 0;
}