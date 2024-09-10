#include "../headers/ll.h";
using namespace std;

vector<ListNode *> splitListToParts(ListNode *head, int k){
    vector<ListNode *> ans(k);
    // length of the ll // minimum length of the bucket // extra nodes 
    int l = getLength(head), ebn = l / k, en = l % k;
    ListNode *curr = head;
    ListNode *prev = nullptr;
    for (int i = 0; curr != NULL &&  i < k; i++){
        ans[i] = curr;
        for (int i = 1; i <= ebn + (en > 0 ? 1 : 0);i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        en--;
    }

    return ans;
}

int main(){
    return 0;
}