//Find out how many times the array is rotated
//Brute Force Approach : Linear Search Approach O(N)

//Optimal Approach : Binary Search Approach O(logN)
//It is similar to the search in rotated sorted array problem as we need to find the pivot element and the index at which the array is rotated that many times the array has been rotated

#include <iostream>
#include <vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int TimesOfRotation(vector<int> &a){
    int low = 0;
    int high = a.size() - 1;
    int index = -1;
    int ans = INT16_MAX;

    while (low <= high) 
    {
        int mid = (low + high)/2;
        if(a[low] <= a[high]){

            if(a[low] < ans){
                index = low;
                ans = a[low];    
            } 
            break;
            }

        if(a[low] <= a[mid]){
            if(a[low] < ans){
                index = low;
                ans = a[low];    
            }

            high = mid + 1;
        }
        else{
            high = mid - 1;
            if(a[mid] < ans){
                index = mid;
                ans = a[mid];    
            }
        }
        return index;
    }
}

int main(){
    vector<int> a = {7,8,1,2,3,4};
    cout<<TimesOfRotation(a);
    return 0;
}
    

