// linkedlist utility functions
#include <ll.h>
using namespace std;
// Converts an array to a linked list
ListNode *__llarrayToList(vector<int> &arr) {
  if (arr.empty())
    return nullptr;

  ListNode *head = new ListNode(arr[0]);
  ListNode *current = head;

  for (size_t i = 1; i < arr.size(); ++i) {
    current->next = new ListNode(arr[i]);
    current = current->next;
  }

  return head;
}

// Prints a linked list
void __llprint(ListNode *head) {
  ListNode *curr = head;
  while (curr != nullptr) {
    cout << curr->val << " -> ";
    curr = curr->next;
  }
  cout << "nullptr" << endl;
}

// Deletes the linked list to free memory
void __lldelete(ListNode *head) {
  ListNode *temp;
  while (head != nullptr) {
    temp = head;
    head = head->next;
    delete temp;
  }
}

// get the length of linkedlist
int __llgetLength(ListNode *head) {
  int length = 0;
  ListNode *current = head;
  while (current != nullptr) {
    length++;
    current = current->next;
  }
  return length;
}
