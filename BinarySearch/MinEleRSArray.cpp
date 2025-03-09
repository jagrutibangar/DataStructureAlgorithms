//Find Minimum element in the Rotated Sorted Array
//Brute Force Approach : Linear Search Approach O(N)

//Optimal Approach : Binary Search Approach O(logN)
//Step 1: Find the mid element of the array
//Step 2: Check if the mid element is less than the previous element and also less than the next element, if yes return the mid element
//Step 3: Identify which half is sorted and check if the element is present or not, if yes then return the index

#include <iostream>
#include <vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int MinEle(vector<int> &a){
    int low = 0;
    int high = a.size() - 1;
    int ans = INT16_MAX;

    while (low <= high)
    {
        int mid = (low + high)/2;
        if(a[low] <= a[mid]){
            ans = min(ans,a[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,a[mid]);
            high = mid - 1;
        }
    }
   return ans;    
}

int main(){
    vector<int> a = {7,8,9,10,0,1,2,3,4,5,6};
    cout<<MinEle(a);
    return 0;
}

//The problem can br optimised by check the mid + 1 element which will be the minimum element in the array if the left half in eliminated
//If the other half is sorted then the minimum element will be the first element of the other half