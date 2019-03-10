#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    vector <int> nums;
    int temp;
    for (int i = 0; i<n;i++) {
        scanf("%d",&temp);
        if (find(nums.begin(),nums.end(),temp) == nums.end()) {
            nums.push_back(temp);
        }
    }
    printf("%lu\n",nums.size());
}
