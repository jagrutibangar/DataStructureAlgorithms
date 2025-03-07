//Floor and Ceiling Problem returns the elemnts lesser than equal to and greater than equal to the given target N 
//Time Complexity = O(log N)


#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;


int Floor(vector<int> a, int n, int target){
    int ans = -1;
    int low = 0; 
    int high = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(a[mid] <= target){
            ans = a[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){

    vector<int> a = {12,34,45,67};
    int n = a.size();
    int t = 25;
    cout << Floor(a,n,t);
    return 0;
}