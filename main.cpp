// linked list
#include "./lib/stdc++.h"
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

int search(Node *head,int number){
    Node *temp = head;
    while (temp)
    {
        if(number == temp->data) return 1;
        else temp = temp->next;
        
    }
     return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = converToLinklist(arr);
    Node *temp = head;
    cout <<  search(head,15);
    return 0;
}
