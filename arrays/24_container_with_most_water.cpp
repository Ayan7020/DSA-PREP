#include<bits/stdc++.h>
using namespace std;

void ContainerWithMostWater(vector<int> v1) {
    int i = 0;
    int j = v1.size() - 1;
    int maxContainerHoldWater = 0;
    while(i<j) {
        maxContainerHoldWater = max(maxContainerHoldWater,(j - i) * min(v1[i],v1[j]));
        if(v1[j] > v1[i]) {
            i++;
        } else {
            j--;
        }
    }
    cout<<"Max container water: "<<maxContainerHoldWater;
}

int main() {
    vector<int> v1 = {1,8,6,2,5,4,8,3,7};
    ContainerWithMostWater(v1);
}