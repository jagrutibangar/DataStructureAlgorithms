#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

//Finding Largest Element in the array
//Brute-Force method for this is: Sort the array and print the last element in the array 
//Time complexity = O(NlogN)

//Optimal Solution is traversing the array with first element as largest element and then keep checking for the larger element untill the complete array is traversed
//Time Complexity = 0(N)
int largestEle(int array[], int n){
    int largest = array[0];

    for (int i = 1; i < n; i++)
    {
        if(array[i] > largest ){
            largest = array[i];
        }
    }
    return largest;
}

int main(){
    int n = 6 ;
    int arr[6] = {2,4,1,6,0,3};
    cout << largestEle(arr, n);
    return 0;
}