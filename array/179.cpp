#include "../headers/stdc++.h";
using namespace std;
string largestNumber(vector<int> &nums){

    string res;
    vector<string> snums;
    for (int num : nums){
        snums.push_back(to_string(num));
    }
    auto costom = [](string s1, string s2){
        return s1 + s2 > s2 + s1;
    };
    sort(snums.begin(), snums.end(), costom);
    for(string num:snums){
        res += num;
    }
    return res;
}
int main(){
    vector<int> arr = {3, 30, 34, 5, 9};
    cout<<largestNumber(arr);
    return 0;
}