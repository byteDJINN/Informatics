#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("magicin.txt","r",stdin);
    freopen("magicout.txt","w",stdout);
    vector<vector<int> > square(3,vector<int>(3,0));
    scanf("%d %d %d",&square[0][0],&square[0][1],&square[1][0]);
    square[2][1] = square[1][0];
    square[2][2] = square[0][0];
    square[1][2] = square[0][1];
    square[1][1] = square[0][0];
    square[0][2] = square[1][0];
    square[2][0] = square[0][1];
    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            printf("%d ",square[row][col]);
        }
        printf("\n");
    }
}


