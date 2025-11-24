#include<iostream>
using namespace std;

void SingleOccurenceElement(int arr[],int n) { 
    int xor1 = 0;
    for(int i=0;i<n;i++) {
         xor1 = xor1 ^ arr[i];
    }
    cout<<"SingleOccurenceElement: "<<xor1;
}

int main() {
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    SingleOccurenceElement(arr,n);
    return 0;
}