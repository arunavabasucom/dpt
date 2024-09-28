#include <stdc++.h>
using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    int num1 = INT16_MIN, num2 = INT16_MIN, num3 = INT16_MIN;
    for (int num : nums)
    {
        num3 = num;
        if (num3 < num1)
        {
            num1 = num3;
        }
        else if (num3 < num2)
        {
            num2 = num3;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}