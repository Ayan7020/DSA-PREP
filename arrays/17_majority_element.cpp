#include <bits/stdc++.h>
using namespace std;
 
 
// using moores voting algo only works if there is truley element appears more than n / 2
void majrity_element(int arr[],int n) {
    int elm = 0;
    int ctr = 0;
    for(int i = 0; i < n; i++) {
        if(ctr == 0) {
            elm = arr[i];
            ctr++;
        } else if (elm != arr[i]) {
            ctr--;
        } else {
            ctr++;
        }
    }
    cout<<"Majority element which appears more than n/2: "<<elm;
} 
 

int main() {
    int arr[] =  {2,2,1,1,1,2,2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    majrity_element(arr,n); 
}

