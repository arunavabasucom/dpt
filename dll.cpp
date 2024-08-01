#include "./stdc++.h";
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node *convertToDLL(vector<int> data)
{
    Node *head = new Node(data[0], nullptr, nullptr);
    Node *prev = head;
    for (int i = 1; i < data.size(); i++)
    {
        Node *temp = new Node(data[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

Node *deleteHead(Node *head)
{
    // head->next = next and head->back = nullptr
    // new head =  head->next

    Node *prev = head; // save to free this one
    head = prev->next; // current head

    head->prev = nullptr;
    prev->next = nullptr;

    free(prev);
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    // assuming the head is a tail
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    // it will stop when it reaches the last element
    Node *newtail = tail->prev;
    tail->prev = nullptr;
    newtail->next = nullptr;
    free(tail);
    return head;
}

Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == k)
            break;
        temp = temp->next;
    }
    // now we are standing in the
    Node *next = temp->next;
    Node *back = temp->prev;

    // if the next and the back both null
    if (next == NULL && back == NULL)
    {
        return NULL;
    }
    else if (back == NULL)
    {
        // it is standing in the head
        deleteHead(head);
    }
    else if (next == NULL)
    {
        deleteTail(head);
    }

    back->next = next;
    next->prev = back;

    temp->next = nullptr;
    temp->prev = nullptr;

    free(temp);

    return head;
}

int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6};
    Node *temp = convertToDLL(array);
    Node *head = deleteKthElement(temp, 2);
    print(head);
    return 0;
}