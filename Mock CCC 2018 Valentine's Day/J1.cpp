#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    bool above10  = false;
    bool above1 = false;
    int temp;
    for (int i = 0; i<n;i++) {
        scanf("%d",&temp);
        if (temp > 10000) {
            above10 = true;
        }
        if (temp > 1000) {
            above1 = true;
        }
    }
    if (above10) {
        printf("Something is wrong with these cuteness values\n");
    }
    else if (above1) {
        printf("Cuteness by definition is similarity to Cactus\n");
    }
    else {
        printf("Cuteness by definition is similarity to Carol\n");
    }
}
