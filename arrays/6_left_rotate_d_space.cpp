#include<iostream>
#include <algorithm>
using namespace std;

// int rotateLeftArray(int arr[],int n,int d) { 
//     d = d % 2;
//     int temp[d];
//     for (int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }
// n-d => 4
//     for(int i=d;i<n;i++) { 
//         arr[i-d] = arr[i];
//     }   
     
//     for(int i=n-d;i<n;i++) {
//         arr[i] = temp[i-(n-d)]; 
//     }
// }

// time complexity d + (n-d) + n => d + n - d + n => 2n ===> O(2n) | O(n)
int rotateLeftArray(int arr[],int n,int d) { 
    reverse(arr,arr+d); // O(d)
    reverse(arr+d,arr+n); // O(n - d)
    reverse(arr,arr+n); // O(n)
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    // {4,5,6,7,1,2,3}
    // 1,2,3 -> 3,2,1 || 4,5,6,7 -> 7,6,5,4 => {3,2,1,7,6,5,4}
    // {4,5,6,7}
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateLeftArray(arr,n,3);
    printArray(arr, n);
    return 0;
}