#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReArrangeArrayElement(int arr[],int n) {
    vector<int> posElm;
    vector<int> negElm;
    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            posElm.push_back(arr[i]);
        } else {
            negElm.push_back(arr[i]);
        }
    }

    if(posElm.size() > negElm.size()) {
        for(int i=0;i<negElm.size();i++) {
            arr[2*i] = posElm[i];
            arr[2*i+1] = negElm[i];
        } 
        int idx = negElm.size() * 2;
        for(int i=negElm.size();i<posElm.size();i++) {
            arr[idx] = posElm[i];
            idx++;
        }
    } else {
        for(int i=0;i<posElm.size();i++) {
            arr[2*i] = posElm[i];
            arr[2*i+1] = negElm[i];
        } 
        int idx = posElm.size() * 2;
        for(int i=posElm.size();i<negElm.size();i++) {
            arr[idx] = negElm[i];
            idx++;
        }
    }
    printArray(arr,n);
}

int main() {
    int arr[] = {1,2,-2,-4,-7,-8,9,-10}; // 1,-2,2,-4,9,-7
    int n = sizeof(arr) / sizeof(arr[0]);
    ReArrangeArrayElement(arr,n);
    return 0;
}