//Finding minimum number of days required to make m bouquets of k flowers 
//given an integer array bloomDay[] and an integer m and k
//using binary search   
//Time complexity: O(nlogn)

//impossible case : if m*k > n, return -1
//possible case: if m*k <= n, find the minimum number of days in which m bouquets can be made

#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<vector>    

using namespace std;

bool canMake(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); //size of the array
    int count = 0;
    int bouquets = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            count++;
        }
        else {
            bouquets += (count / k);
            count = 0;
        }
    }
    bouquets += (count / k);
    return bouquets >= m;
}

//applying binary search to find the minimum number of days required to make m bouquets of k flowers
int minDays(vector<int> arr, int k, int m) {
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (canMake(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}


int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = minDays(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}