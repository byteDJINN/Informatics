#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> swift;
    vector<int> semap;
    scanf("%d",&n);
    int temp;
    for (int i=0;i<n;i++) {
        scanf("%d",&temp);
        swift.push_back(temp);
    }
    for (int i=0;i<n;i++) {
        scanf("%d",&temp);
        semap.push_back(temp);
    }
    int num1=0;
    int num2=0;
    int highest=0;
    for (int i=0;i<n;i++) {
        num1 += swift[i];
        num2 += semap[i];
        if (num1==num2) {
            highest = i+1;
        }
    }
    printf("%d\n",highest);
}
