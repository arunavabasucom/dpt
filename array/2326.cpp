#include "../headers/ll.h";

using namespace std;

vector<vector<int>> spiralMatrix(int m, int n, ListNode *head){
    vector<vector<int>> res(m,vector<int>(n,-1));
    int top = 0, bottom = m-1, left = 0, right = n-1, id = 0;
    while(top<= bottom && left <= right){
        // left to right
        if(id == 0){
            for (int i  = left; head != nullptr && i <= right; i++){
                res[top][i] = head->val;
                head = head->next;
            }
            top++;
        }
        // top to bottom
        if (id == 1){
            for (int i = top; head != nullptr && i <= bottom; i++){
                res[i][right] = head->val;
                head = head->next;
            }
         
            right--;
        }
        // right  to left
        if (id == 2){
            for (int i = right; head != nullptr && i >= left; i--){
                res[bottom][i] = head->val;
                head = head->next;
            }
            bottom--;
        }
        // bottom  to top
        if (id == 3){
            for (int i = bottom; head != nullptr && i >= top; i--){
                res[i][left] = head->val;
                head = head->next;
            }
            left++;
        }
        id = (id + 1) % 4;
    }
    return res;
}
int main(){
    
    return 0;
}