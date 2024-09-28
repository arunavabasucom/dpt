#include <stdc++.h>
using namespace std;
//(s1,e1) (s2,e2)
// 1. check overlap
// if max(s1,s2) < min(b1,b2)-> overlapping
// 2. overlapping region
// max(s1,s2), min(b1,b2)
// TC - O(N)
vector<pair<int, int>> db; // double booking
vector<pair<int, int>> ob; // overall booking
bool checkOverlap(int s1, int e1, int s2, int e2)
{
    if (max(s1, s2) < min(e1, e2))
        return true;
    return false;
}
pair<int, int> ovp(int s1, int e1, int s2, int e2)
{
    return {max(s1, s2), min(e1, e2)};
}
bool book(int start, int end)
{
    // if triple booking return false
    for (pair<int, int> num : db)
    {
        if (checkOverlap(num.first, num.second, start, end))
        {
            return false;
        }
    }
    // if double booking store the overlapping part and return true
    for (pair<int, int> num : ob)
    {
        if (checkOverlap(num.first, num.second, start, end))
        {
            db.push_back(ovp(num.first, num.second, start, end));
        }
    }
    ob.push_back({start, end});
    return true;
}

int main()
{

    return 0;
}