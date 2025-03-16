//Binary Search on 2D Arrrays:
//Key points: We cannot apply Binary Search on Row wise but we can appply on Column wise considering each row as a sorted array.

//Problem: Given a 2D array, where each row is sorted. Find the row with maximum number of 1s.

//In this Problem, we will have to use the Lower Bound concept of Binary Search for each row and find the first occurence of 1 in each row and then calculate the number of 1s in each row and then find the row with maximum number of 1s.
//total time complexity: O(nlogm) where n is the number of rows and m is the number of columns

#include <iostream>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

//finds the lower bound of 1 in a row - first one in a row
//time complexity: O(logm) where m is the number of columns
int lowerBound(vector<int> &arr)
{
    int low = 0;
    int high = arr.size()-1;
    int mid;
    while(low<high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]==1)
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}


//finds the row with maximum number of 1s
//time complexity: O(nlogm) where n is the number of rows and m is the number of columns
int maxNumOnes(vector<vector<int>> &arr , int n, int m)
{
    int maxOnes = 0;
    int index = -1;
    for (int i = 0; i < n-1; i++)
    {
        int cntOnes = m - lowerBound(arr[i]);
        if(cntOnes>maxOnes){
            maxOnes = cntOnes;
            index = i;
        }    
    }
    return index; 
}

int main()
{
    vector<vector<int>> arr = {{0,0,0,1},{0,1,1,1},{1,1,1,1},{0,0,0,0}};
    int n = 4;
    int m = 4;
    cout<<maxNumOnes(arr,n,m);
    return 0;
}
