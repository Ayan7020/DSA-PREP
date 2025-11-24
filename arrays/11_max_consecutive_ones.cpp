#include<iostream>
using namespace std;

void maxConsecutiveOnes(int arr[],int n) {
    int maxOnesState = 0;
    int stateCounter = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 1) {
            stateCounter++;
            maxOnesState = max(maxOnesState,stateCounter);
        } else {
            stateCounter = 0;
        }
    }
    cout<<"Max Consecutive Ones: "<<maxOnesState;
}

int main() {
    int arr[] = {1,1,0,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxConsecutiveOnes(arr,n);
    return 0;
}