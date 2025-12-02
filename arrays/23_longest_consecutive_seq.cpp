#include<bits/stdc++.h>
using namespace std; 


// there is one more approach of using sort there tc is o(n log n)
void LongestConsecutiveSeq(vector<int> v1) {
    unordered_set<int> uniqueElm;
    int longestSeq = 0;
    for(int i=0;i<v1.size();i++) {
        uniqueElm.insert(v1[i]);
    } 
    for(auto elm:uniqueElm) {
        if(uniqueElm.find(elm - 1) == uniqueElm.end()) {
            int ctr = 1; 
            int x = elm;
            while(uniqueElm.find(x+1) != uniqueElm.end()) {
                x++;
                ctr++;
            }
            longestSeq = max(longestSeq,ctr);
        }
    }
    cout<<"Longest Consecutive Seqence length: "<<longestSeq;
}

int main() {
    vector<int> v1 = {100,4,200,1,3,2};
    LongestConsecutiveSeq(v1);
}