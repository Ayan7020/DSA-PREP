#include<iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// one more optimized solution using swap
int main() {
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int s = sizeof(arr) / sizeof(arr[0]); 
    int idx = 0;
    for (int i=0;i<s;i++) {
        if( arr[i] != 0) { 
            swap(arr[i],arr[idx]);
        }
    } 
    printArray(arr,s);
    return 0;
}