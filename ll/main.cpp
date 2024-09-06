#include "./ll.h";
#include "../headers/stdc++.h";

using namespace std;

ListNode *modifiedList(vector<int> &nums, ListNode *head){
    unordered_set<int> s;
    for(int num: nums){
        s.insert(num);
    }
    // point to a proper head 
    while(head && s.count(head->val)){
        ListNode *dn = head;
        head = head->next;
        delete (head);
    }
    ListNode *curr = head;
    while(curr){
        if(curr && s.count(curr->next->val)){
            ListNode *dn = curr->next;
            curr->next = curr->next->next;
            delete (dn);
        }else{
            curr = curr->next;
        }
    }

    return head;
}
int main(){
    
    return 0;
}