//Search Position of tan given element in the array is similar to finding the lower bound elemnts index

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

int searchPos(vector<int> &a, int target, int n){
    int low = 0;
    int high = n - 1;
    int index = n;

    while (low <= high)
    {
       int mid = (low + high)/2;
        if(a[mid] >= target){
            index = mid;
            high = mid - 1;
            }
        else{
            low = mid + 1;
        }
    }
    return index;
}

int main(){

    vector<int> arr = {1,2,3,5,8,9};
    int s = arr.size();
    int m = 6;
    cout << searchPos(arr,m,s);
    return 0;
}