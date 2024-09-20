#include "../headers/stdc++.h";
#include "../headers/arr.h";

using namespace std;
vector<int> getSneakyNumbers(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> umap;
    for(int n:nums){
        if(umap.find(n) != umap.end() && umap[n]>=1){
            ans.push_back(n);
        }
        umap[n]++;
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {0, 3, 2, 1, 3, 2};
    __veprint(getSneakyNumbers(arr));
    return 0;
}