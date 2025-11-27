#include<bits/stdc++.h>
using namespace std;


void printVector(const std::vector<int>& vec) {
    for (const auto& x : vec) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

void Unions(vector<int> arr1,vector<int> arr2) {
    vector<int> UnionsP;
    int i=0;
    int j=0;
    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] <= arr2[j]) {
            if((UnionsP.size() == 0) || (UnionsP.back() != arr1[i])) {
                UnionsP.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if((UnionsP.size() == 0) || (UnionsP.back() != arr2[j])) {
                UnionsP.push_back(arr2[j]);
            }
            j++;
        }
    } 

    while(i < arr1.size()) {
        if((UnionsP.size() == 0) || (UnionsP.back() != arr1[i])) {
                UnionsP.push_back(arr1[i]);
        }
        i++;
    }

    while (j < arr2.size())
    {
       if((UnionsP.size() == 0) || (UnionsP.back() != arr2[j])) {
                UnionsP.push_back(arr2[j]);
        }
        j++;
    }

    cout<<"Unions: ";
    printVector(UnionsP);
    cout<<endl;
    
}

void Intersection(vector<int> arr1,vector<int> arr2) {
    int i = 0;
    int j = 0;
    vector<int> intersect;
    while(i < arr1.size() && j < arr2.size()) {
       if(arr1[i] < arr2[j]) {
            i++;
       } else if (arr1[i] > arr2[j]) {
            j++;
       } else {
            if((intersect.size() == 0) || (intersect.back() != arr1[i])) {
                intersect.push_back(arr1[i]);
            }
            i++;
            j++;
       }

    }
    cout<<"InterSection: ";
    printVector(intersect);
    cout<<endl;
}


int main() {
    vector<int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};
    
    Unions(arr1,arr2);
    Intersection(arr1,arr2);
    return 0;
}