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
void segregate012(Node *&head)
{
    if (!head)
        return;

    Node *zeroHead = nullptr, *oneHead = nullptr, *twoHead = nullptr;
    Node *zeroTail = nullptr, *oneTail = nullptr, *twoTail = nullptr;

    Node *curr = head;

    while (curr)
    {
        if (curr->data == 0)
        {
            if (!zeroHead)
            {
                zeroHead = curr;
                zeroTail = zeroHead;
            }
            else
            {
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            }
        }
        else if (curr->data == 1)
        {
            if (!oneHead)
            {
                oneHead = curr;
                oneTail = oneHead;
            }
            else
            {
                oneTail->next = curr;
                oneTail = oneTail->next;
            }
        }
        else
        {
            if (!twoHead)
            {
                twoHead = curr;
                twoTail = twoHead;
            }
            else
            {
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
        }
        curr = curr->next;
    }

    if (zeroTail)
        zeroTail->next = oneHead;
    if (oneTail)
        oneTail->next = twoHead;

    head = zeroHead ? zeroHead : (oneHead ? oneHead : twoHead);
    if (twoTail)
        twoTail->next = nullptr;
}

int main()
{
    Node *head = nullptr;
    insertNode(head, 0);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 1);
    insertNode(head, 0);
    insertNode(head, 2);
    insertNode(head, 1);

    cout << "Original List: ";
    printList(head);
    segregate012(head);

    cout << "Segregated List: ";
    printList(head);

    return 0;
}
