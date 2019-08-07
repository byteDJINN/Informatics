#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    scanf("%d",&n);
    vector<char> student_answers;
    vector<char> answers;
    char temp;
    for (int i=0;i<n;i++) {
        scanf("\n%c",&temp);
        student_answers.push_back(temp);
    }
    for (int i=0;i<n;i++) {
        scanf("\n%c",&temp);
        answers.push_back(temp);
    }
    int c = 0;
    for (int i=0;i<n;i++) {
        if (student_answers[i] == answers[i]) {
            c++;
        }
    }
    printf("%d",c);
}
