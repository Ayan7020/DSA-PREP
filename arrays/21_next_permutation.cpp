#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void printVector(const std::vector<int>& vec) {
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

void NextPermutationV1(vector<int> v1) {
    next_permutation(v1.begin(),v1.end());
    printVector(v1);
}

void NextPermutationV2(vector<int> v1) { 
    int sIdx = v1.size() - 2;
    while((sIdx >= 0) && (v1[sIdx] >= v1[sIdx + 1])) sIdx--;
    if(sIdx >= 0) {
        int clstsIdx = v1.size() - 1;
        while(v1[sIdx] >= v1[clstsIdx]) clstsIdx--;
        swap(v1[sIdx],v1[clstsIdx]);
    }
    reverse(v1.begin() + sIdx+1,v1.end());
    printVector(v1);
}

int main() {
    vector<int> v1 = {1,2,3};
    NextPermutationV2(v1);
    return 0;
}