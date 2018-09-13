#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;int m;
	vector<string>adjectives;
	vector<string>nouns;
	cin >> n >> m;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // ignore newline
	for (int i=0;i<n;i++) { // go through adjectives getting input
		string word;
		getline(cin,word);
		adjectives.push_back(word);
	}
	for (int i=0;i<m;i++) { // go through nouns getting input
		string word;
		getline(cin,word);
		nouns.push_back(word);
	}
	for (int i=0;i<n;i++) { // for each adjective
		for (int j=0;j<m;j++) { // for each noun for each of those adjectives
			cout << adjectives[i] << " as " << nouns[j] << "\n"; // print out that adj and noun
		}
	}
	return 0; // happiness...
}
