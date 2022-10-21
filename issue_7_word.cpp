/*
title - Word
link - https://codeforces.com/problemset/problem/59/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            j++;
        }
        else
        {
        }
    }
    int k;
    k = s.length() - j;
    // cout<<"k is "<<k<<"j is "<<j<<endl;
    if (j > k)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] > 96)
            {
                s[i] = s[i] - 32;
            }
            else
            {
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 96)
            {
                s[i] = s[i] + 32;
            }
            else
            {
            }
        }
    }
    cout << s;
    return 0;
}
