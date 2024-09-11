#include "../headers/ll.h";
using namespace std;
ListNode *swapPairs(ListNode *head){
    if(head == nullptr ){
        return nullptr;
    }
    if(head->next == nullptr){
        return head;
    }
    ListNode *next = head->next;
    ListNode *tempNode = swapPairs(next->next);
    head->next = tempNode;
    next->next = head;
    return next;
}
int main(){
    
    return 0;
}