#include <stdc++.h>
using namespace std;
string predictPartyVictory(string senate)
{
    queue<int> rq, dq;
    for (int i = 0; i < senate.size(); i++)
        senate[i] == 'R' ? rq.push(i) : dq.push(i);
    while (!rq.empty() && !dq.empty())
    {
        int r = rq.front(), d = dq.front();
        rq.pop();
        dq.pop();
        if (r < d)
            rq.push(r + senate.size());
        else
            dq.push(d + senate.size());
    }
    if (rq.size() > dq.size())
        return "Radiant";
    else
        return "Dire";
}
int main()
{

    return 0;
}