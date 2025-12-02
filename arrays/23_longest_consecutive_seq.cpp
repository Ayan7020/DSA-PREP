#include<bits/stdc++.h>
using namespace std; 

void LongestConsecutiveSeq(vector<int> v1) {
    sort(v1.begin(),v1.end());
    int longestSeq = 0;
    int ctr = 0;
    int lastMin = INT_MIN;
    for(int i=0;i<v1.size();i++) {
        if(v1[i] - 1 == lastMin) {
            ctr++;
            lastMin = v1[i];
        } else if (v1[i] - 1 != lastMin) {
            ctr = 1;
            lastMin = v1[i];
        }
        longestSeq = max(ctr,longestSeq);
    } 
    cout<<"Longest Consecutive Seqence length: "<<longestSeq;
}

int main() {
    vector<int> v1 = {100,4,200,1,3,2};
    LongestConsecutiveSeq(v1);
}