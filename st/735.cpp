// need to take a look
#include "../headers/stdc++.h";
using namespace std;
// vector<int> 
void asteroidCollision(vector<int> &asteroids){
    stack<int> st;
    // iterate over the stack
    for (int ad : asteroids){
        if(st.empty()){
            st.push(ad);
        }
        // if the stack is not empty and the either the
        else if (st.top() != st.empty() &&  (st.top() < 0 && ad > 0 ||  st.top()> 0 && ad < 0) && st.top()<= ad){
            st.pop();
        }else{
            st.push(ad);
        }
    }
}
int main(){
    vector<int> arr = {5,
                       10,
                       -5};
    asteroidCollision(arr);
    return 0;
}