#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> p1 = {2,1};
    cout<<p1.first<<","<<p1.second<<endl;

    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.first<<", {"<<p2.second.first<<","<<p2.second.second<<"}"<<endl;
}

 /*
    std::pair is a simple struct with exactly two public members: .first and .second.
    Members are public, not accessed by index.
    Lightweight, no extra template meta-magic.
    pair → simple, fixed, readable, and cheap.
*/