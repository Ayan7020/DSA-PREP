#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReArrangeArrayElement(int arr[],int n) {
    int temp_array[n];
    int posIdx = 0;
    int negIdx = 1;
    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            temp_array[posIdx] = arr[i];
            posIdx+=2;
        } else {
            temp_array[negIdx] = arr[i];
            negIdx+=2;
        }
    }
    printArray(temp_array,n);
}

int main() {
    int arr[] = {3,1,-2,-5,2,-4};
    int n = sizeof(arr) / sizeof(arr[0]);
    ReArrangeArrayElement(arr,n);
    return 0;
}