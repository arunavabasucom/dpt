#include "./stdc++.h";
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        this->data = data1;
        this->next = next1;
    }
};

Node *converToLinklist(vector<int> arr)
{

    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int search(Node *head, int number)
{
    Node *temp = head;
    while (temp)
    {
        if (number == temp->data)
            return 1;
        else
            temp = temp->next;
    }
    return 0;
}

// delete node
Node *deleteNode(Node *head)
{

    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *traverse(Node *head)
{
   if (head == NULL) return 0;
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return head;
}

// delete tail element

Node *deleteTail(Node *head)
{
    Node *temp = head;
    if (temp->next == nullptr || temp == nullptr)
        return 0; // if the head is not exist or the just have one node
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    free(temp->next); // deleteing the tail element
    temp->next = nullptr;
    return head;
}

// deleteing the kth element
Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return 0;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node *prv = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            prv->next = prv->next->next;
            free(temp);
            break;
        }
        prv = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int el)
{
    Node *temp = new Node(el, head);
    return temp;
}

Node *insertTail(Node *head, int el)
{
    if(head == NULL) {
        Node *newtail = new Node(el, nullptr);
        return newtail;
    }
    Node *temp = head;
    while (temp->next != NULL){
        temp= temp->next;
    }
    //Node *temp = new Node(el, head);
    Node *newtail = new Node(el,nullptr);
    temp->next = newtail;
    return head;
}

int main()
{
    vector<int> arr = {NULL};
    Node *head = converToLinklist(arr);
    // Node *temp = head;
    // head = deleteNode(head);
    // cout << search(head, 15);
    // deleteTail(head);
    // deleteKthElement(head, 4);
    //head = insertHead(head, 8);
    head = insertTail(head, 10);
    traverse(head);
    return 0;
}
