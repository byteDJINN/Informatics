
#include <bits/stdc++.h>

using namespace std;

int main() {
    FILE * inp = fopen("listin.txt","r");
    FILE * out = fopen("listout.txt","w");
    int f;
    fscanf(inp,"%d",&f);
    map<int,int > friends;
    int tempa,tempb;
    for (int i=0;i<f;i++) {
        fscanf(inp,"%d %d",&tempa,&tempb);
        friends[tempa]++;
        friends[tempb]++;
    }
    int highest = 0;
    vector<int> highest_friends;
    for (map<int,int>::iterator it = friends.begin();it != friends.end();it++) {
        if (it->second>highest) {
            highest = it->second;
        }
    }
    for (map<int,int>::iterator it = friends.begin(); it != friends.end();it++) {
        if (it->second == highest) {
            highest_friends.push_back(it->first);
        }
    }
    for (vector<int>::iterator it = highest_friends.begin();it!= highest_friends.end();it++) {
        fprintf(out,"%d\n",*it);
    }

}
