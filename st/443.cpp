#include <stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int n = chars.size();
    int i = 0;
    int index = 0;
    if (n == 1)
    {
        return chars.size();
    }
    while (i < n)
    {
        int count = 0;
        char curr_char = chars[i];
        while (i < n && chars[i] == curr_char)
        {
            count++;
            i++;
        }
        chars[index++] = curr_char;
        if (count > 1)
        {
            string count_str = to_string(count);
            for (char ch : count_str)
            {
                chars[index++] = ch;
            }
        }
    }
    chars.resize(index);
    return chars.size();
}
int main()
{
    vector<char> arr = {'a',
                        'a',
                        'b',
                        'b',
                        'c',
                        'c',
                        'c'};
    compress(arr);
    return 0;
}