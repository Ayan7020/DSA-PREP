#include <bits/stdc++.h>
using namespace std;
 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sorting012(int arr[],int n) {
    int low = 0, mid = 0, high = n -1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    printArray(arr,n);

} 
 

int main() {
    int arr[] =  {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    sorting012(arr,n); 
}

