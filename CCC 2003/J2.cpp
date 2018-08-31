// Picture Perfect
#include <bits/stdc++.h>

int perimeter(int area);

int main() {
    int a;
    scanf("%d",&a);
    while (a != 0) {
        int s1; int s2;
        s1 = perimeter(a);
        s2 = a/s1;
        int p = s1*2 + s2*2;
        printf("Minimum perimeter is %d with dimensions %d x %d\n",p,s1,s2);
        scanf("%d",&a);
    }
    return 0;
}
int perimeter(int area) {
    int side = sqrt(area);
    while (area % side != 0) {
        side -= 1;
    }
    return side;
}
