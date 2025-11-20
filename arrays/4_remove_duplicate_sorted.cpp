#include <bits/stdc++.h>
using namespace std;


// time complexity o(n log n)
//int uniqueArrayLength(int arr[],int n) { 
//    set<int> setArr;
//    for (int i=0;i<n;i++) {
//        setArr.insert(arr[i]);
//   }
//   return setArr.size();
//}

// time complexity o(n) <- two pointer
int uniqueArrayLength(int arr[],int n) { 
    int Uniquelen = 0;
    int frstPtr = 0;
    for (int i=1;i<n;i++) {
        if(arr[frstPtr] != arr[i]) {
            frstPtr = i;
            Uniquelen++;
        }
    }
    return Uniquelen + 1;
}


int main() {
    int arr[] =  {1,1,2,2,2,3,3,8}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<uniqueArrayLength(arr,n);
}

