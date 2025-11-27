#include<bits/stdc++.h>
using namespace std;
// if 2 points difference is k 
// then the segment between them must sum to k.
void longestSubarraySumK(int arr[],int n,int k) {
    unordered_map<long long ,int> freq;
    freq[0] = 1;
    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(freq.count(sum - k)) {
            count += freq[sum - k]; 
        }
        freq[sum]++;
    }
    cout<<"Count Sum: "<<count;
} 

int main() {
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    longestSubarraySumK(arr,n,k);
    return 0;
}

