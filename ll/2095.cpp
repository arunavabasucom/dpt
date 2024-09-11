#include "../headers/ll.h";
using namespace std;
ListNode *deleteMiddle(ListNode *head){
    ListNode *slow = head;
    ListNode *fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *dn = slow->next;
    slow->next = slow->next->next;
    delete (dn);
    return head;
}
int main(){
    
    return 0;
}