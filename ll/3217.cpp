#include "../headers/ln.h";
#include "../headers/lnu.h";
#include "../headers/stdc++.h";
using namespace std;

ListNode *modifiedList(vector<int> &nums, ListNode *head) {
  unordered_set<int> uset;
  int l = 0;
  for (int num : nums) {
    uset.insert(num);
  }
  while (head && uset.count(head->val)) {
    ListNode *temp = head;
    head = head->next;
    delete (temp);
  }
  ListNode *curr = head;
  while (curr && curr->next) {
    if (uset.count(curr->next->val)) {
      ListNode *deleteNode = curr->next;
      curr->next = curr->next->next;
      delete (deleteNode);
    } else {
      curr = curr->next;
    }
  }
  return head;
}