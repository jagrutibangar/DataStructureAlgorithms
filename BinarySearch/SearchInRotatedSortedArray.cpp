//Search in Rotated Sorted Array : 7,8,9,10,11,12,1,2,3,4,5,6
//Search target = 1 and return index of target (the array has all unique elements)

//Brute Force Approach : Linear Search Approach O(N)

//Optimal Approach : Binary Search Approach O(logN)
//Step 1: Find the mid element of the array
//Step 2: Check if the mid element is equal to the target element, if yes return the mid index
//Step 3: Identify which half is sorted and check if the element is present or not, if yes then return the index
//Step 4: If not, then check if the target element lies in the other half of the arrayS

#include <iostream>
#include <vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> &a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = (low + high)/2;

        if(a[mid] == target) return mid;
        if(a[low] <= a[mid]){
            if(a[low] <= target && target < a[mid] ){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(a[mid] < target && target <= a[high]){
            low  = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}



int main(){
    vector<int> a = {7,8,9,10,11,12,1,2,3,4,5,6};
    int target = 1;
    cout<<Search(a,target);
    return 0;
}
       