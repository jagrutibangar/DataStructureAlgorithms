//Find out least capacity to ship packages in D days
//Problem: Given an array of integers weights, where weights[i] is the weight of the ith package. We need to ship these packages in D days. The ith day, we can ship packages with sum of weights less than or equal to a certain capacity. We need to find out the least capacity to ship packages in D days.

//In this problem, we will have to apply Binary Search on the range of weights and find out the least capacity to ship packages in D days.

//The range of weights will be from the maximum weight to the sum of all weights.

//The time complexity of this problem is O(nlogm) where n is the number of packages and m is the sum of all weights.

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>

using namespace std;

//finds the number of days required to ship the packages with a given capacity
//time complexity: O(n)
int daysRequired(vector<int> &weights, int capacity)
{
    int days = 1;
    int load = 0;

    for(int i = 0; i < weights.size(); i++)
    {
        if(load + weights[i] > capacity){
            days++;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}


//finds the least capacity to ship packages in D days
//time complexity: O(nlogm) where n is the number of packages and m is the sum of all weights   
int shipingCapacity(vector<int> &weights, int D)
{
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0); 
    
    while(low<high)
    {
        int mid = low + (high-low)/2;
        int nofdays = daysRequired(weights,mid);
        if(nofdays<=D)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}


int main()
{
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int D = 5;
    cout<<shipingCapacity(weights,D);
    return 0;
}