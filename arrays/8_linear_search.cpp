#include<iostream>
using namespace std;

int main() {
    int arr[] = {6,7,8,4,1};
    int n = sizeof(arr) / sizeof(n);
    for(int i=0;i<n;i++) {
        if(arr[i] == 4) {
            return 1;
        }
    }
    return 0;
}