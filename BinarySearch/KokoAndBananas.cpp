//Find the minimum number of hrs in which all bananas can be eaten within K hours
//using binary search
//Time complexity: O(nlogn)


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int totalhours(vector<int> &piles, int mid) {
    int hrs = 0;
    for(int i = 0; i < piles.size(); i++) {
        hrs += ceil(piles[i] / mid);
    }
    return hrs;
}

int minEatingSpeed(vector<int> &piles, int K){
    int low = 1, high = *max_element(piles.begin(), piles.end());
    while (low <= high) {
        int mid = (low + high) / 2;
        int hrs = 0;
        int totalhrs = totalhours(piles, mid);

        if (totalhrs <= K) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

int main(){
    vector<int> piles = {3, 6, 7, 11};
    int K = 8;
    cout << "The minimum number of hours in which all bananas can be eaten is: " << minEatingSpeed(piles, K) << endl;
    return 0;
}