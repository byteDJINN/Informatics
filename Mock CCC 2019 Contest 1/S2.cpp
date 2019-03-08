#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int wrong = 0;
    int temp;
    for (int y=0;y<n;y++) {
        for (int x=1;x<=n;x++) {
            scanf("%d",&temp);
            if (temp != n*y+x) {
                wrong ++;
            }
        }
    }
    int answer;
    if (sqrt(wrong) == int(sqrt(wrong))) {
        answer = sqrt(wrong);
    }
    else {
        answer = sqrt(wrong+1);
    }
    printf("%d\n",answer);
}
