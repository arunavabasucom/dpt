#include "../headers/ll.h"
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
// ListNode *insertGreatestCommonDivisors(ListNode *head) {
//   ListNode *curr = head;
//   while (curr->next != nullptr) {
//     int val = gcd(curr->val, curr->next->val);
//     ListNode *temp = curr->next;
//     ListNode *newNode = new ListNode(val, temp);
//     curr->next = newNode;
//     curr = curr->next->next;
//   }

//   return head;
// }
// TC - O(N) SC -O(1) O(N)
ListNode *insertGreatestCommonDivisors(ListNode *head){
  if(!head || !head->next)
    return head;
  ListNode *tempNode = insertGreatestCommonDivisors(head->next);
  ListNode *gcdNode = new ListNode(gcd(head->val, head->next->val),tempNode);
  head->next = gcdNode;
  return head;
}

int main() {
  vector<int> arr = {18, 6, 10, 3};
  ListNode *head = __llarrayToList(arr);
  insertGreatestCommonDivisors(head);
  return 0;
}    