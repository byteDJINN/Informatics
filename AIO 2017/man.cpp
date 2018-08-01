#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream in("manin.txt");
    ofstream out("manout.txt");
    int nums[4];
    int c;
    c = 0;
    while (in) {
        in >> nums[c];
        c += 1;
    }
    if (nums[0] - nums[2] == nums[1] - nums[3]) {
        out << nums[0] - nums[2];
    }
    else if (nums[0] + nums[2] == nums[1] - nums[3]) {
        out << nums[0] + nums[2];
    }
    else if (nums[0] - nums[2] == nums[1] + nums[3]) {
        out << nums[0] - nums[2];
    }
    else if (nums[0] + nums[2] == nums[1] + nums[3]) {
        out << nums[0] + nums[2];
    }

    
    return 0;
}
