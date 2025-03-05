//Binary Search can be applied only if the elements are "SORTED" in ant way


#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int binSearch(int a[], int n, int target){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = (low + high)/2;

        if(target == a[mid]){
            return mid;
        }

        else if(target < a[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}



int main(){

    int a[] = {3,5,7,9,12,16,17};
    int size = 7;
    int t = 16;

    int ans = binSearch(a,size,t);
    cout << ans ;
    return 0;

}