#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

//Brute Force: 
//Iterate through both the arrays and add the elements to a set data structure and then copy the set into an result array
//Time Complexity : O(n1logn + n2logn) + O(n1+n2)
//Space Comp: O(n1+n2) + O(n1+n2)

void Union(vector<int> &a, vector<int> &b){
    set <int> st;
    vector<int> ans;
    //find all unique elements using set
    for (int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }

    //copy all elements
   for(auto it:st){
    ans.push_back(it);
   }
   for (int i = 0; i < ans.size(); i++)
   {
       cout << ans[i] << " ";
   }
}

//Optimal Approach: Two Pointer Approach
//Start iterating from starting of the 1st array and then increase j if there is unique element 
//Time Complexity : O(n1+n2)
//Space Complexity : O(n1+n2)

vector<int> UnionArray(vector<int> &a, vector<int> &b){
    vector<int> ans;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if(a[i] <= b[j]){
            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
        j++;
        }
    }

    while (j < n2)
    {
    if(ans.size() == 0 || ans.back() != b[j]){
        ans.push_back(b[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if(ans.size() == 0 || ans.back() != a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    
    return ans;
}


int main(){
    vector<int> a = {1,1,2,3,3,4};
    vector<int> b = {1,3,3,4,5,5,6};
    vector<int> ans;
   // Union(a,b);   //Brute force 
    vector<int> res = UnionArray(a,b);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}