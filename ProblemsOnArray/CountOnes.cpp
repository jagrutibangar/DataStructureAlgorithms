#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int CountOnes(vector<int> a){
    int count = 0;
    int maximum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == 1){
            count += 1;
            maximum = max(count,maximum);
        }
        else{
            count = 0;  
        }
    }
    return maximum;
}

int main(){ 

    vector <int> a = {1,1,0,1,1,1,0,1,1};
    cout << CountOnes(a);

    return 0;
}