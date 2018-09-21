#include <bits/stdc++.h>
using namespace std;

int main () {
    map<int,int> money;
    money[1] = 100;
    money[2] = 500;
    money[3] = 1000;
    money[4] = 5000;
    money[5] = 10000;
    money[6] = 25000;
    money[7] = 50000;
    money[8] = 100000;
    money[9] = 500000;
    money[10] = 1000000;
    int n;
    cin >> n;
    int temp;
    float totalMoney = 1691600;
    for (int i=0;i<n;i++) {
        cin >> temp;
        totalMoney -= money[temp];
    }
    totalMoney = totalMoney/(10-n);
    cin >> temp;
    if (temp > totalMoney) {
        cout << "deal";
    } else {
        cout << "no deal";
    }
    cout << endl;
    return 0;

}
