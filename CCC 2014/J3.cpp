#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 100;
    int d = 100;
    for (int i = 0;i<n;i++) {
        int t1;
        int t2;
        cin >> t1 >> t2;
        if (t1 > t2) {
            d -= t1;
        }
        if (t2 > t1) {
            a -= t2;
        }
    }
    cout << a << endl << d;
    return 0;
}
