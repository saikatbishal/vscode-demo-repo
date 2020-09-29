using namespace std;
#include <iostream>
struct Node
{
    int data;
    Node *next;
};
Node *head;
void Insert(int x);
void Delete();
void Print();
int main()
{
    //implementing stacks through linked lists
    //we need 3 functions - Insert Delete Print;
    //one struct to make a node object;
    //Last_in First_out;
}
void Insert(int data)
{
    Node *temp = new Node;
    temp->data = data;
    Node *temp2 = head;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->next = nullptr;

}