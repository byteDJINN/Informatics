#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d\n",&n);
    vector<char> today;
    char temp;
    for (int i=0;i<n;i++) {
        scanf("%c",&temp);
        today.push_back(temp);
    }
    scanf("\n");
    int answer = 0;
    for (int i=0;i<n;i++) {
        scanf("%c",&temp);
        if (temp == today[i] && temp == 'C') {
            answer ++;
        }
        //printf("%c %c\n",temp,today[i]);
    }
    printf("%d\n",answer);
}
