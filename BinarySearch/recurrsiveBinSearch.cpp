//Binary Search can be applied only if the elements are "SORTED" in ant way
//Time Complexity = O(log N)

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int RbinSearch(int a[], int low, int high, int target){

    if(low > high) return -1;
    int mid = (low + high)/2;
     
    if(target == a[mid]){
            return mid;
     }

    else if(target < a[mid]){
            return RbinSearch(a,low,mid-1,target);
        }
        else {
            return RbinSearch(a,mid + 1,high,target);
        }
    }


int main(){

    int a[] = {3,5,7,9,12,16,17};
    int size = 7;
    int t = 16;

    int ans = RbinSearch(a,0,size-1,t);
    cout << ans ;
    return 0;

}