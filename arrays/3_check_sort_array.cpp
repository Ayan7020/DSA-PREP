#include <bits/stdc++.h>
using namespace std;

bool isSortArray(int arr[],int n) { 
    for(int i=1;i<n;i++) {
        if(arr[i] < arr[i-1]) { 
            return false;
        }
    }
    return true;
}   

int main() {
    int arr1[] = {1,2,2,3,3,4};
    int arr2[] = {1,2,1,3,4};
    int negarr[] = {-1,-2,-3,-4};
    int n = sizeof(negarr) / sizeof(negarr);
    cout<<isSortArray(negarr,n);
}