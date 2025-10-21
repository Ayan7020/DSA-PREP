#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    int a = 10;
    v.push_back(a); // it will create the object expliclitly and then move/copy to the vector it is slow 
    v.emplace_back(a); // it will directly create object in the vector it is fast

    vector<pair<int,int>> v1; 
    v1.push_back({1,2});
    v1.emplace_back(1,2);

    vector<int> v2(6,100);  // six insance of 100 -> {100,100,100,100,100,100} but you can add more element into it despite you predefined the size 

    vector<int> v3(7); // seven instance of garbage or 0 value

    vector<int> v4(8,10);
    vector<int> v7(v4);


    // accessing the vector 
    // .begin() -> points to the first element of the vector.
    // points just past the last element (you can’t dereference it).

    //first noob method - I
    cout<<"METHOD-I"<<endl;
    for(vector<int>::iterator it = v.begin(); it != v.end();it++) {
        cout<< *(it) << endl;
    }

    //second Pro method - II
    cout<<"METHOD-II"<<endl;
    for(auto it = v.begin(); it != v.end();it++) {
        cout<< *(it) << endl;
    }

    // for each loop
    cout<<"FOR EACH"<<endl;
    for(auto it: v) {
        cout<< it << ",";
    }

    // {10,20,21,30}
    v.erase(v.begin() + 1); // remove the 20 -> {10,21,30}

    // {10,20,12,23,35}
    v.erase(v.begin() + 1,v.begin() + 4); // remove the range so it remove {20,12,23} remain -> {10,35} last one ddint count

    
}