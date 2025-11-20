#include <bits/stdc++.h>
using namespace std;

int FindSecondMaxElement(int arr[],int n) {
    if (n < 2) return -1; 
    int max = INT32_MIN;
    int second_max = max;
    for(int i=0;i< n;i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if ((arr[i] > second_max) && (arr[i] < max)) {
            second_max = arr[i];
        }
    }
    return second_max;
}

int FindSecondMinElement(int arr[],int n) {
    if (n < 2) return -1; 
    int min = INT32_MAX;
    int second_min = min;
    for(int i=0;i< n;i++) {
        if(arr[i] < min) {
            second_min = min;
            min = arr[i];
        } else if ((arr[i] < second_min) && (arr[i] > min)) {
            second_min = arr[i];
        }
    }
    return second_min;
}

int main() {
    int arr[] =  {3,1,1,1,1,2,2,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = FindSecondMinElement(arr,n);
    cout<<"Second Min Element: "<<c<<endl;
    int d = FindSecondMaxElement(arr,n);
    cout<<"Second Max Element: "<<d;
}

