#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> friends;
    int k,m;
    scanf("%d\n%d",&k,&m);
    for (int i=1;i<k+1;i++) {
        friends.push_back(i);
    }
    int temp;
   int bonus;
    for (int i=0;i<m;i++) {
        scanf("%d",&temp);
        bonus = 0;
        for (int pos=0;pos<static_cast<signed int>(friends.size());pos++) {
            //printf("%d %d %d\n",pos+1+bonus,temp,*(friends.begin()+pos+bonus));
            //for (int p=0;p<friends.size();p++) {
            //    printf("%d ",friends[p]);
            //}
            //printf("\n");
            if ((pos+1+bonus) % temp == 0) {
                //printf("Erasing %d at pos %d\n",*(friends.begin()+pos),pos+1);
                //printf("%d %d\n",bonus,temp);
                friends.erase(friends.begin()+pos);
                bonus += 1;
                pos -= 1;
            }
        }
    }
    for (int i=0;i<static_cast<signed int>(friends.size());i++) {
        printf("%d\n",friends[i]);
    }
}
