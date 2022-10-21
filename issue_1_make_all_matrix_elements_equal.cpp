// link to question - https://codeforces.com/problemset/problem/289/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n * m);
    for (int i = 0; i < n * m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int avg;
    int sc = 0;
    bool fault = false;
    if ((n * m) % 2)
    {
        avg = v[(n * m) / 2];
        for (auto &val : v)
        {
            int diff = abs(avg - val);
            if (diff % k)
            {
                fault = true;
            }
            sc += diff / k;
        }
    }
    else
    {
        bool f1 = false, f2 = false;
        int sc1 = 0, sc2 = 0;
        avg = v[(n * m) / 2];
        for (auto &val : v)
        {
            int diff = abs(avg - val);
            if (diff % k)
            {
                f1 = true;
            }
            sc1 += diff / k;
        }
        avg = v[(n * m) / 2 - 1];
        for (auto &val : v)
        {
            int diff = abs(avg - val);
            if (diff % k)
            {
                f2 = true;
            }
            sc2 += diff / k;
        }
        fault = f1 || f2;
        if (f1 && !f2)
        {
            sc = sc2;
        }
        else if (!f1 && f2)
        {
            sc = sc1;
        }
        else
        {
            sc = min(sc1, sc2);
        }
    }
    if (fault)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sc << endl;
    }
    return 0;
}
