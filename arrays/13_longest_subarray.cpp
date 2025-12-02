#include<bits/stdc++.h>
using namespace std;

void longestSubarraySumK(int arr[],int n,int k) {
    unordered_map<long long ,int> freq;
    freq[0] = -1;
    int sum = 0;
    int len = 0;
    int longestSubarray = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(freq.count(sum - k)) {
            len = i - freq[sum - k];
            longestSubarray = max(longestSubarray,len);  
        } 
        if(!freq.count(sum)) {
            freq[sum] = i;
        }
    }   
    cout<<"Longest Subarray with sum K: "<<longestSubarray;
}

int main() {
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    longestSubarraySumK(arr,n,k);
    return 0;
}   

// 1 - 3 => -2 !present | 1 + 0 => 1:1
// 1+2 => 3 | 3-3 => 0 present 0+1 | 3:1