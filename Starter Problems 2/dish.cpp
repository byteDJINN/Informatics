#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("dishin.txt");
    int n;
    inFile >> n;
    int nums[n];
    for (int i = 0;i<n;i++) {
        inFile >> nums[i];
    }
    inFile.close();
    int minimum,maximum,mean;
    minimum = *min_element(nums,nums+n);
    maximum = *max_element(nums,nums+n);
    int total = 0;
    for (int i = 0;i<n;i++) {
        total += nums[i];
    }
    mean = total/n;
    ofstream outFile;
    outFile.open("dishout.txt");
    outFile << minimum << " " << maximum << " " << mean;
    outFile.close();
}
