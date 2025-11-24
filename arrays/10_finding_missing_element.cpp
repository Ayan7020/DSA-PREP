#include<iostream>
using namespace std;
// finding missing element in given range of n

// brute force 
//  2 times loop tc o(n^2)
// xor same number get cancelled out irrespective of their position

void findMissing(int arr[],int n) {
    int xor1 =  0;
    int xor2 = 0;
    for(int i=0;i<n;i++) {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i + 1);
    }
    xor1 = xor1 ^ xor2;
    cout<<"Missing element: "<<xor1;
}

int main() {
    int arr[] = {3,0,1};
    int n = 3;
    findMissing(arr,n);
    return 0;
}