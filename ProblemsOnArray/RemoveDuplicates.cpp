#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

//Remove duplicates in-place from Sorted Array

//Brute Force: Iterate through the array and insert the elements into a Set Data Structure and then insert the set elements into an array and return same.
//Time complexity = O(NlogN) + O(N)
//Space Complexity = O(N)

//Solution 01:
void RemDup(vector<int> &a){
    set <int> st;
    for (int i = 0; i < sizeof(a); i++)
    {
        st.insert(a[i]);
    }

    int index = 0;
    for(auto it:st){
        a[index] = it;
        index++;
    }  

    for (int i = 0; i < sizeof(a); i++)
    {
      cout << a[i];
    }
}

//Optimal Approach: Two pointer method
// j iterates the array and checks with first element if it is not simliar it inserts it after the first 
//Time Complexity = O(N)
//Space Complexity = O(1)

//Solution 02:

int duplicateIndex(vector<int> &a){
    int i = 0;

    for (int j = 1; j < a.size(); j++)
    {
        if(a[i] != a[j]){
            a[i+1] = a[j];
            i++;
        }   
    }
    return i+1;
}

int main(){

    vector <int> a = {1,1,2,2,2,3,3};
    cout << duplicateIndex(a);
    // for (int i = 0; i < n; i++)
    // {
    //    cout <<  a[i] << endl;
    // }
    return 0;
}


