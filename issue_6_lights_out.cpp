/*
title - lights out
link - http://codeforces.com/problemset/problem/275/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool result[3][3];
    int tab[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            result[i][j] = true;
        }
    }
    /*
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    */
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin >> tab[i][j];
        }
    }
    if (tab[0][0] % 2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[0][1] = !result[0][1];
        // result[1][1] = !result[1][1];
    }
    if (tab[1][0] % 2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];
        result[1][1] = !result[1][1];
    }
    
    if (tab[2][0] % 2 != 0)
    {
        result[2][0] = !result[2][0];
        // result[1][1] = !result[1][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if (tab[0][1] % 2 != 0)
    {
        result[0][0] = !result[0][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        result[0][2] = !result[0][2];
    }
    if (tab[1][1] % 2 != 0)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if (tab[2][1] % 2 != 0)
    {
        result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
        // result[2][2] = !result[2][2];
    }
    if (tab[0][2] % 2 != 0)
    {
        result[0][2] = !result[0][2];
        result[0][1] = !result[0][1];
        // result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
    }
    if (tab[1][2] % 2 != 0)
    {
        result[1][2] = !result[1][2];
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[2][2] = !result[2][2];
    }
    if (tab[2][2] % 2 != 0)
    {
        result[2][2] = !result[2][2];
        // result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
        result[2][1] = !result[2][1];
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}
