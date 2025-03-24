//Finding maximuum sum of the logest subarray in the given array
//Time Complexity: O(n)
//Space Complexity: O(1)
//Approach: Kadane's Algorithm

#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;


int maxSubArray(vector<int>& nums) {
    long long sum = 0, mx = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            mx = max(mx, sum);
            if (sum < 0) sum = 0;
        }
         return mx;
        }  

        
int main(){
    vector<int> nums = {5,4,-1,7,8};
    cout << maxSubArray(nums);
    return 0;
}