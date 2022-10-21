/*

title- Young Physicist
link - http://codeforces.com/problemset/problem/69/A

*/

#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin >> n;
    int int1, int2, int3;
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 0; i < n; i++){
        cin >> int1 >> int2 >> int3;
        x += int1;
        y += int2;
        z += int3;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES" <<endl;
    else cout << "NO" <<endl;
}

int main() {
	answer();
	return 0;
}
