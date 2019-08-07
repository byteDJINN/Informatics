#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> numbers;
    int n;
    scanf("%d",&n);
    int temp;
    for (int i=0;i<n;i++) {
        scanf("%d",&temp);
        if (temp != 0) {
            numbers.push_back(temp);
        } else {
            numbers.pop_back();
        }
    }
    int total = 0;
    for (int i=0;i<static_cast<signed int>(numbers.size());i++) {
        total += numbers[i];
    }
    printf("%d\n",total);
}
