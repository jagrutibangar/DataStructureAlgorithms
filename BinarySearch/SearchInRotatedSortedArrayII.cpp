//Search in Rotated Sorted Array : 7,8,9,10,11,12,3,3,3,4,5,6
//Search target = 3 and return index of target (the array has all unique elements)
//Here the array has duplicates

//Optimal Approach : Binary Search Approach O(logN)
//In this case, we need to add an additional condition to check if the mid element is equal to the low element

#include <iostream>
#include <vector>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool Search(vector<int> &a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low <= high){
        int mid = (low + high)/2;

        if(a[mid] == target) return true;

        //check the edge case where the mid element is equal to the low element and also equal to the high element
        if(a[mid] == a[low] && a[mid] == a[high]){
            low = low + 1;
            high = high - 1;
            continue;
        }
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
    return false;
}



int main(){
    vector<int> a = {7,8,9,10,11,12,3,3,3,4,5,6};
    int target = 3;
    cout<<Search(a,target);
    return 0;
}
       