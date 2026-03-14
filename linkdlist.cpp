#include <iostream>
using namespace std;
struct Node
{
       int data;
       Node *next;
};
int main()
{
       Node *head = new Node;
       Node *second = new Node;
       Node *third = new Node;

       // data assign
       head->data = 1;
       head->next = second;

       second->data = 2;
       second->next = third;

       third->data = 3;
       third->next = NULL;

       Node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << " ";
              temp = temp->next;
       }
       cout << endl;
       return 0;
}