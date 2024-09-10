#include "../headers/stdc++.h";
using namespace std;
bool check(int v , int c,int k ){
    if (v == c && (v * c) % k == 0)
        return true;
    return false;
}
int beautifulSubstrings(string s, int k){
    int slen = s.size();
    int v = 0, c = 0, res = 0;
    set<char> st = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    // first k window 
    for (int  i = 0; i < k; i++){
        if(st.count(s[i])){
            v++;
        }
        else{
            c++;
        }
    }
    if(check(v,c,k)){
        res++;
    }
    // start from k
    for (int i = k; k < slen;i++){
        if(st.count(s[i]) && !st.count(s[i-k])){
            v++;
            c--;
        }else{
            c++;
            v--;
        }        
    }
    if (check(v, c, k)){
        res++;
    }
    return res;
}
int main(){
    beautifulSubstrings("baeyh", 2);
    return 0;
}
class Solution
{
public:
    bool check(int v, int c, int k)
    {
        if (v == c && (v * c) % k == 0)
            return true;
        return false;
    }
    int beautifulSubstrings(string s, int k)
    {
        // cout << s.size();
        int slen = s.size();
        int v = 0, c = 0, res = 0;
        set<char> st = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        // first k window
        for (int i = 0; i < k; i++)
        {
            if (st.count(s[i]))
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        if (check(v, c, k))
        {
            res++;
        }
        // start from k
        for (int i = k; i < slen; i++)
        {

            if (st.count(s[i]))
            {
                v++;
            }
            else
            {

                c++;
            }
            if (st.count(s[i - k]))
            {
                v--;
            }
            else
            {
                c--;
            }
            if (check(v, c, k))
            {
                res++;
            }
        }

        return res;
    }
};