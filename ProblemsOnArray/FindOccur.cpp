#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

//An approach for this Problem is using hash map of the type ordered

int FindSingleEle(vector<int> a){
int n = a.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[a[i]]++;
    }
    //Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)
            return it.first;
    }
    //This line will never execute
    //if the array contains a single element.
    return -1;
}

//This problem has an Optimal approach of using XOR 

int FindOne(vector<int> a){
    int XOR = 0;
    for (int i = 0; i < a.size(); i++)
    {
        XOR = XOR ^ a[i];
    }
    return XOR;
}

int main(){ 

    vector <int> a = {1,1,2,3,3,5,5,6,6};
    cout << FindOne(a);
    cout << FindSingleEle(a);
    return 0;
}