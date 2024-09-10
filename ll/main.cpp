#include "../headers/ll.h";


using namespace std;

int main(){
    vector<int> arr = {1, 2, 3,4};
    ListNode *head = arrayToList(arr);
    cout << getLength(head);
    return 0;
}