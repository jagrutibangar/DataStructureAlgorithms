//In this question we need to ultimately return the indexs of the Lower bound and upper bound

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>


using namespace std;


int lowerBound(vector<int> &a, int target, int n){
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
       int mid = (low + high)/2;
        if(a[mid] >= target){
            ans = mid;
            high = mid - 1;
            }
        else{
            low = mid + 1;
        }
    }
    return ans;
}


int upperBound(vector<int> &a, int target, int n){
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high)
    {
       int mid = (low + high)/2;
        if(a[mid] > target){
            ans = mid;
            high = mid - 1;
            }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

pair<int ,int> FirstAndLastOccur(vector<int> a, int n, int target){
    int lb = lowerBound(a,n,target);
    if((lb == n) || (a[lb] != target)   )  return {-1,-1};
    else{
    return {lb, upperBound(a,n,target)-1};
   }                 
}


int main(){

    vector<int> a = {1,2,5,5,5,7,8,12};
    int n = a.size();
    int t = 5;
    pair<int, int> p = FirstAndLastOccur(a,n,t);
    cout << "{ " << p.first << "," << p.second <<" }" << endl;
    return 0;
}