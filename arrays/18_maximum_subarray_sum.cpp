#include<bits/stdc++.h>
using namespace std;

// Kidanes Algorithm TC O(n) SC o(1)
// dont carry yourself any -ve numbers
void MaxSubArraySum(int arr[],int n) {
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        maxSum = max(sum,maxSum);
        if(sum < 0) {
            sum = 0;
        }
    }
    cout<<"Max Sub Array Sum: "<<maxSum<<endl;
}

void MaxSubarrayPos(int arr[],int n) {
    int posStart = 0;
    int posEnd = -1;
    int start = 0;
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++) { 
        if(sum == 0) start = i;
        sum+=arr[i];
        if(sum > maxSum) {
            posStart = start;
            maxSum = sum;
            posEnd = i;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    cout<<"Max Sub Array Start: "<<posStart<<" End: "<<posEnd<<endl;
}

void MinSubArraySum(int arr[],int n) {
    int minSum = INT_MAX;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        minSum = min(sum,minSum);
        if (sum > 0) {
            sum = 0;
        } 
    }
    cout<<"Min Sub Array Sum: "<<minSum<<endl;
}

void MinSubarrayPos(int arr[],int n) {
    int posStart = 0;
    int posEnd = -1;
    int start = 0;
    int minSum = INT_MAX;
    int sum = 0;
    for(int i=0;i<n;i++) { 
        if(sum == 0) start = i;
        sum+=arr[i];
        if(sum < minSum) {
            posStart = start;
            minSum = sum;
            posEnd = i;
        }
        if(sum > 0) {
            sum = 0;
        }
    }
    cout<<"Min Sub Array Start: "<<posStart<<" End: "<<posEnd<<endl;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    MaxSubArraySum(arr,n);
    MaxSubarrayPos(arr,n);
    MinSubArraySum(arr,n);
    MinSubarrayPos(arr,n);
    return 0;
}