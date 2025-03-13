//Find the minimum divisor of a number whose sum is lesser than the given threshold
//Using binary search on Answers the time complexity is O(logn)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

int sumOfDivisors(vector<int> &nums, int mid) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += ceil((double)(nums[i]) / (double)(mid));
}
return sum;
}

int findSmallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max(nums.begin(), nums.end());
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) /2;
        if(sumOfDivisors(nums, mid) <= threshold) {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int> nums = { 1, 2, 3, 4, 5};
    int threshold = 8;
    cout << "The smallest divisor of the numbers whose sum is less than " << threshold << " is " << findSmallestDivisor(nums, threshold) << endl;
    return 0;
}
