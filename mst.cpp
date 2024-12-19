#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *segregate012(Node *head)
{
    if (!head || !head->next)
        return head;
    Node *zero = new Node(-1), *one = new Node(-1), *two = new Node(-1);
    Node *zerot = zero, *onet = one, *twot = two;
    Node *curr = head;
    while (curr)
    {
        if (curr->data == 0)
        {
            zerot->next = curr;
            zerot = zerot->next;
        }
        else if (curr->data == 1)
        {
            onet->next = curr;
            onet = onet->next;
        }
        else
        {
            twot->next = curr;
            twot = twot->next;
        }
        curr = curr->next;
    }

    // if(zeroTail->next==one-next){

    // }
    if (one->next)
    {
        zerot->next = one->next;
    }
    else
    {
        zerot->next = two->next;
    }

    onet->next = two->next;
    twot->next = nullptr;
    if (zero->next)
    {
        head = zero->next;
    }
    else if (one->next)
    {
        head = one->next;
    }
    else
    {
        head = two->next;
    }
    delete zero;
    delete one;
    delete two;

    return head;
}

int main()
{
    Node *head = nullptr;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 0);
    insertNode(head, 1);
    insertNode(head, 0);
    insertNode(head, 2);
    insertNode(head, 1);

    cout << "Original List: ";
    printList(head);
    head = segregate012(head);

    cout << "Segregated List: ";
    printList(head);

    return 0;
}
