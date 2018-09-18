#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        for (int i = 0; i < k; i++) {
            cout << "*";
        } 
        for (int i = 0; i < k; i++) {
            cout << "x";
        } 
        for (int i = 0; i < k; i++) {
            cout << "*";
        } 
        cout << endl;
    }
    for (int i = 0; i < k; i++) {
        for (int i = 0; i < k; i++) {
            cout << " ";
        } 
        for (int i = 0; i < k; i++) {
            cout << "x";
        } 
            for (int i = 0; i < k; i++) {
            cout << "x";
        } 
        cout << endl;
    }
    for (int i = 0; i < k; i++) {
        for (int i = 0; i < k; i++) {
            cout << "*";
        } 
        for (int i = 0; i < k; i++) {
            cout << " ";
        } 
        for (int i = 0; i < k; i++) {
            cout << "*";
        } 
        cout << endl;
    }
    return 0;
}
