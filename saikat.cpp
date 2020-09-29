#include <iostream>
#include <stdio.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head;
void Insert(int data,int n)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for (int i = 0; i < n - 2;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void InsertEnd(int data)
{
    Node *temp = new Node;
    temp->data = data;
    Node* temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->next = NULL;
}
void InsertFirst(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void DeleteEnd()
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;

}
void DeleteFirst()
{
    Node *temp = head;
    head = temp->next;
    delete (temp); 
}
void Print()
{
    cout << "The resulting list is : "
        << "\n";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    Insert(3, 1);
    Insert(2, 2);
    Insert(1, 1);
    Print();
    InsertEnd(13);
    InsertEnd(12);
    Print();
    InsertFirst(98);
    Print();
    DeleteEnd();
    Print();
    DeleteFirst();
    Print();
}