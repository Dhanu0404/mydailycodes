#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertattail(node *&head, int val)
{
    if (head == NULL)
    {
        insertathead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deletion(node* &head, int pos)
{

    node *temp = head;
    if (pos == 1)
    {head=head->next;
    head->prev=NULL;
    delete temp;
    return;
    }

    while (pos != 1)
    {
        temp = temp->next;

        pos--;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

int main()
{
    node *head = NULL;
    insertattail(head, 2);
    insertattail(head, 5);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 6);
    insertathead(head, 100);
    insertathead(head, 234);
    insertattail(head, 5678);
   
    deletion(head,1);
     display(head);
    return 0;
}