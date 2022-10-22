//In this problem you should count number of consecutive pairs of equal letters.
// It can be done using one cycle and O(N) time.
// TIME COMPLEXITY : O(N)
//SPACE COMPLEXITY : O(1)
#include <iostream>
using namespace std;
string b;
int a, c;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}