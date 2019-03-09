#include <bits/stdc++.h>
using namespace std;

int main() {
    float p,q,w;
    scanf("%f\n%f\n%f",&p,&q,&w);
    q = q - 0.5;
    float c = p/100*(1-w/100);
    float x = (q-c*100)/w*100;
    if (x < 0) {
        printf("0\n");
    }
    else if (x <= 100) {
        printf("%d\n",(int)roundf(x));
    }
    else {
        printf("DROP THE COURSE\n");
    }

}
