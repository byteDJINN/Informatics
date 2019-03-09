#include <bits/stdc++.h>
using namespace std;

int main() {
    char areaCode1[10];
    char localNum1[10];
    scanf("%s %s",areaCode1,localNum1);
    string areaCode = areaCode1;
    string localNum = localNum1;
    bool invalid = false;
    if (areaCode != "416" && areaCode != "647" && areaCode != "437") {
        invalid = true;
    }
    if (localNum.length() != 7) {
        invalid = true;
    }
    if (!invalid && areaCode == "416") {
        printf("valuable\n");
    }
    else if (!invalid) {
        printf("valueless\n");
    }
    else {
        printf("invalid\n");
    }

}
