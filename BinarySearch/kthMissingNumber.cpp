//Finding kth missing number
// Given an array arr of size n and an integer k, find the kth missing number in the array.
// The missing number is defined as the number that is not present in the array and is less than or equal to the maximum element of the array.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the kth missing number in the array
int findKthPositive(vector<int>& arr, int k) {
    int low = 0;
    int high = arr.size() - 1;
    
        while(low <= high){
            int mid = (low+high)/2;
            int missing = arr[mid] - (mid+1);
    
            if(missing < k){
                low = mid + 1; 
                   
                }
            else{
                high = mid - 1;
                }
            }   
        return k + high + 1; 
        }

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    int result = findKthPositive(arr, k);
    cout << "The " << k << "th missing number is: " << result << endl;
    return 0;
}