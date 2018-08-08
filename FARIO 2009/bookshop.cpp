#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    map <int,int> books;
    scanf("%d",&n);
    int t;
    for (int i=0;i<n;i++) {
        t = 0;
        scanf("%d",&t);
        books.insert(pair <int,int> (t,i+1));
    }
    scanf("%d",&k);
    for (int i=0;i<k;i++) {
        t = 0;
        scanf("%d\n",&t);
        printf("%d\n",books.find(t)->second);
    }
}
