#include <bits/stdc++.h>
using namespace std;


void printVector(const std::vector<int>& vec) {
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

vector<int> v1_2sum(int arr[],int n,int target) {
    unordered_map<int,int> y;
    vector<int> foundIdx;
    for(int i=0;i<n;i++) {
        auto foundElement = y.find(arr[i]);
        if(foundElement != y.end()) {
            foundIdx.push_back(foundElement->second);
            foundIdx.push_back(i);
            return foundIdx;
        }
        y[target - arr[i]] = i;
    }
    return foundIdx;
} 
 

int main() {
    int arr[] =  {2,6,5,8,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14; 
    vector<int> d = v1_2sum(arr,n,target);
    printVector(d);
}

