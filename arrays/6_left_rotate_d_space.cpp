#include <bits/stdc++.h>
using namespace std;

int rotateLeftArray(int arr[],int n,int d) {
    int temp = arr[0];
    for(int i=d;i<n;i++) { 
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateLeftArray(arr,n,2);
    printArray(arr, n);
    return 0;
}