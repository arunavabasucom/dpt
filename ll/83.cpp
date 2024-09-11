#include "../headers/ll.h";
using namespace std;

ListNode *deleteDuplicates(ListNode *head) {
  if (head == nullptr) {
    return nullptr;
  }
  if (head->next == nullptr) {
    return head;
  }
  ListNode *curr = head;
  while (curr && curr->next) {
    if (curr->val == curr->next->val) {
      ListNode *tempNode = curr->next;
      curr->next = curr->next->next;
      delete (tempNode);
      continue;
    }
    curr = curr->next;
  }

  return head;
}

int main() {
  vector<int> arr = {1, 2, 2, 3};
  ListNode *temphead = _llarrayToList(arr);
  ListNode *head = deleteDuplicates(temphead);
  __llprint(head);
  return 0;
}