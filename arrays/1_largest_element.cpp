#include <bits/stdc++.h>
using namespace std;

int FindMaxElement(int arr[],int n) {
    int max = INT32_MIN;
    for(int i=0;i< n;i++) {
        if(arr[i] > max) {
            max = arr[i];
        } 
    }
    return max;
}

int main() {
    int arr[] =  {1,2,4,7,7,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = FindMaxElement(arr,n);
    cout<<"Max Element: "<<c<<endl;
}

