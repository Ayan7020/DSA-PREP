#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BuyAndSellStock(int arr[],int n) {
    int maxPr = 0;
    int minBuy = INT_MAX;
    for(int i=0;i<n;i++) {
        minBuy = min(arr[i],minBuy);
        maxPr = max(arr[i] - minBuy,maxPr);
    } 
    cout<<"Profit: "<<maxPr;
}

int main() {
    int arr[] = {7,1,5,3,6,4}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    BuyAndSellStock(arr,n);
    return 0;
}