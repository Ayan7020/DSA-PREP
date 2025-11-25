#include<iostream>
using namespace std;

void longestSubarraySumK(int arr[],int n,int k) {
    int left = 0 , right = 0;
    int cumSum = arr[0];
    int maxLen = 0;
    while(right < n) {
        while(cumSum > k) {
            cumSum -= arr[left];
            left++;
        }
        if (cumSum == k) {
            maxLen = max(maxLen,(right - left) + 1);
        }
        right++;
        if (right < n) cumSum = cumSum + arr[right];
    }
    cout<<"Max Length: "<<maxLen;
}

int main() {
    int arr[] = {4,2,7};
    int k = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    longestSubarraySumK(arr,n,k);
    return 0;
}