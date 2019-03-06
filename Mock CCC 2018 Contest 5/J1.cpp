#include <bits/stdc++.h>
using namespace std;

int main() {
    char inpArray[11];
    scanf("%s",inpArray);
    string input = inpArray;
    if (input.find("CCC") != string::npos) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
}
