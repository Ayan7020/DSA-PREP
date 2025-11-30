#include<bits/stdc++.h>
using namespace std;

void printVector(const std::vector<int>& vec) {
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

void NextPermutation(vector<int> v1) {
    printVector(v1);
}

int main() {
    vector<int> v1 = {1,2};
    NextPermutation(v1);
    return 0;
}