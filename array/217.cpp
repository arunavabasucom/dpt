#include "../headers/stdc++.h";
using namespace std;
bool containsDuplicate(vector<int> &nums){
    int n = nums.size();
    unordered_map<int,int> umap;
    // sort(nums.begin(), nums.end());
    for(int num:nums){
        if(umap.find(num) != umap.end() && umap[num] >= 1)
            return true;
        else
            umap[num]++;
    }
    return false;
}
int main(){
    
    return 0;
}