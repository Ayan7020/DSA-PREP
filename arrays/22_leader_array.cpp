#include<bits/stdc++.h>
using namespace std;

void printVector(const std::vector<int>& vec) {
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}


void leaderInArray(vector<int> v1) {
    vector<int> leaders;
    int biggestElmIdx = INT_MIN;
    int start = v1.size() - 1;
    while(start >= 0) { 
        if(v1[start] > biggestElmIdx) {
            leaders.push_back(v1[start]);
            biggestElmIdx = v1[start];
        }
        start--;
    }
    printVector(leaders);
}

int main() {
    vector<int> v1 = {10,22,12,3,0,6};
    leaderInArray(v1);
}