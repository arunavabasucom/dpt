// New source file: st/933.cpp
#include <stdc++.h>
using namespace std;
queue<int> qu;
int ping(int t)
{
    qu.push(t);
    while (!qu.empty() && qu.front() < (t - 3000))
        qu.pop();
    return qu.size();
}
int main()
{

    return 0;
}