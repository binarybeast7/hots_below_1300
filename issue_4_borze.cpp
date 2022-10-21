/*
link - https://codeforces.com/problemset/problem/32/B
title - Borze
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    vector<int> v;
    int i=0;
    while(i<n)
    {
        if(s[i]=='.')
        {
            v.push_back(0);
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            v.push_back(1);
            i=i+2;
        }
        else if(s[i]='-'&&s[i]=='-'){
            v.push_back(2);
            i=i+2;
        }
    }
    for (i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
    return 0;
}
