#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;int b;int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b+c == 180) {
        if (a == 60 && b == 60 && c == 60) {
            cout << "Equilateral\n";
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles\n";
        }
        else {
            cout << "Scalene\n";
        }

    } 
    else {
        cout << "Error\n";
    }
    return 0;

}
