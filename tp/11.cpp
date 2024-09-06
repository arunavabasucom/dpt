#include "../headers/stdc++.h";
using namespace std;
// 
// TC - O(N)
int maxArea(vector<int> &height){
    int  hlen = height.size() , l = 0, h = hlen - 1;
    int maxArea;
    // area -> min height * (h-l)
    // move both the pointers to the high 
    while(l<h){
        int area = min(height[l], height[h]) * (h - l);
        maxArea = max(maxArea, area);
        if(height[l]>height[h])
            h--;
        else
            l++;
    }
    return maxArea;
}
int main(){
    
    return 0;
}