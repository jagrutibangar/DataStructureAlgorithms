#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>
#include<iostream>

using namespace std;

//Brute Force : Iterate through each element in the array there should be another similar element in the other array 
//Time Complexity : O(N1*N2)  

vector<int> IntersectArray(vector<int> &a, vector<int> &b){
    vector<int> ans;
    int n1 = a.size();
    int n2 = b.size();
    int visited[n2] = {0};

    for (int i = 0; i < n1; i++)
    {
       for (int j = 0; j < n2; j++)
       {
        if (a[i] == b[j] && visited[j] == 0)
        {
            ans.push_back(a[i]);
            visited[j] = 1;                            
            break;
        }
        if(b[j] > a[i]) break;
       }
    }
return ans;
}


//Optimal Approach :  Two pointer method and check through the both the arrays
//Time Complexity = O(N+M)
//Space Complexity = O(1)

vector<int> IntersectArray2(vector<int> &a, vector<int> &b){
    vector<int> ans;
    int n = a.size();
    int m = b.size();
    int i, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    } 
    return ans;
}

int main(){
    vector<int> a = {1,1,2,3,3,4};
    vector<int> b = {1,3,3,4,5,5,6};
    vector<int> ans;
   // Union(a,b);   //Brute force 
    vector<int> res = IntersectArray2(a,b); //Optimal Approach
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}

