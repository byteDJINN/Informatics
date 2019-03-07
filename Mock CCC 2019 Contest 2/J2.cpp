#include <bits/stdc++.h>
using namespace std;

int main() {
    int chunks = 0;
    bool currentJ = false;
    char temp;
    for (int i = 0; i<7;i++) {
        scanf(" %c",&temp);
        if (temp == 'J' && !currentJ) {
            chunks ++;
            currentJ = true;
        }
        if (temp == 'T') {
            currentJ = false;
        }
    }
    printf("%d\n",chunks);
}
