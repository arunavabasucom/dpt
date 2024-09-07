#include "../headers/ln.h";
#include "../headers/lnu.h";
using namespace std;

int main(){
    vector<int> nums = {1, 3};
    vector<int> head_nums = {1, 2, 3, 4, 5};
    ListNode *t_head = arrayToList(head_nums);
    ListNode* head = modifiedList(nums, t_head);
    printList(head);

    return 0;
}