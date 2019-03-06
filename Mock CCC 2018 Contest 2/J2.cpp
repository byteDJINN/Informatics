#include <bits/stdc++.h>
using namespace std;

int main() {
    char arrayWord[105];
    scanf("%s",arrayWord);
    string word = arrayWord;
    bool odd = true;
    string substring;
    int length = word.length();
    for (int windowLength = length; windowLength > 1; windowLength -= 1) {
        if (!odd) {
            break;
        }
        if (windowLength % 2 == 0) {
            for (int index = 0; index <= length - windowLength; index += 1) {
                substring = word.substr(index,windowLength);
                string reversed = substring;
                // reverse the string reversed
                for (int i = 0; i < windowLength / 2; i++) {
                    swap(reversed[i],reversed[windowLength-i-1]);
                    
                }
                // check if reversed and substring are the same
                if (reversed == substring) {
                    odd = false;
                    break;
                }
            }
        }

    }
    if (odd) {
        printf("Odd\n");
    }
    else {
        printf("Even\n");
    }
}

