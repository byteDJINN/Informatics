#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int c = n+1;
	string s = to_string(c);
	while (find(begin(s),end(s),'0') != end(s)) {
		c++;
		s = to_string(c);
	}
	printf("%d\n",c);
}
