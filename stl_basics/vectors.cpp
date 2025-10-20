#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    int a = 10;
    v.push_back(a);
    v.emplace_back(a);

    vector<pair<int,int>> v1; 
    v1.push_back({1,2});
    v1.emplace_back(1,2);

    vector<int> v2(6,100);  // six insance of 100 -> {100,100,100,100,100,100} but you can add more element into it despite you tell the size predefined

    vector<int> v3(7); // seven instance of garbage or 0 value

    vector<int> v4(8,10);
    vector<int> v7(v4);


    // accessing the vector
    

}