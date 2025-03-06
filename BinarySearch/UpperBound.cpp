//Upper Bound : Retunrs an index in the array whose element at that index is Greater than the given number N.
//Applying Binary Search here
//Time Complexity = O(Log N)


#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

int upperBound(vector<int> &a, int target, int n){
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
       int mid = (low + high)/2;
        if(a[mid] > target){
            ans = mid;
            high = mid - 1;
            }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {1,2,3,5,8,9};
    int s = arr.size();
    int m = 4;
    cout << upperBound(arr,m,s);
    return 0;
}