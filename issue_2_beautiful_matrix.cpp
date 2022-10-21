/*
Title - Beautiful Matrix
link - http://codeforces.com/problemset/problem/263/A
*/

// code
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int m,n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                m=i-2;
                if(m<0){
                    m=m*(-1);
                }
                else{
                    m=m;
                }
                n=j-2;
                if(n<0){
                    n=n*(-1);
                }
                else{
                    n=n;
                }

            }
        } 
    }
    cout<<m+n;

    return 0;
}
