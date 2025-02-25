#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

//Moving all zeros to Right of the Array
//Brute Force: 
//First Iterate the array to find non-zero elements and store in temp 
//Then rewrite them in original array and rest Zero 
//Time complexity: O(2N) == O(N)
//Space Complexity: O(N)

void MoveZeros(vector<int> &a){
    vector<int> temp;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    
    for (int i = 0; i < temp.size(); i++)
    {   
        a[i] = temp[i];
    }
    //cout<< temp.size() << endl;

    for(int j = temp.size() ; j < a.size(); j++){
        a[j] = 0;
    }    
}

//Optimal Approach : Two pointer method
//Find the first occurence of the 0 mark that point and start iterating till n and swap the non-zero element in front of the Zero element index
//Time Complexity : O(N)
//Space Complexity : O(1) No extra space is used.

void MoveZeroToRight(vector<int> a){
    //find first occurence of zero
    int j = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }
    if(j == -1) return;
    //bring the non-zero elements to front
    for (int i = j+1; i < a.size(); i++)
    {
       if(a[i] != 0){
        swap(a[i],a[j]);
        j++; 
       }
    }
}

int main(){

    vector <int> a = {1,0,2,3,0,0,3,4};
    //MoveZeros(a); //Brute force 
    MoveZeroToRight(a); //Optimal Approach
    for (int i = 0; i < a.size(); i++)
    {
       cout <<  a[i] << " ";
    }
    return 0;
}

