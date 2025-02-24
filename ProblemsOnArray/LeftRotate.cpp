#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

//Left Rotate by 1 place :
void leftRotate(vector<int> &a){

    int temp = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        a[i-1] = a[i];
    }
    a[a.size()-1] = temp;  
}


//Left Rotate by D places : 
//Brute Force approach :
// First insert the first D elements in a temp array and then perform shifting in the remaining array by iterting again
 //Time complexity : O(N)

vector <int> leftRotateByD(vector<int> &a, int d){
    int n = a.size();
    d = d % n;
    vector <int> temp;
    //store D elements in temp
    for (int i = 0; i < d; i++)
    {
        temp.push_back(a[i]);
    }
    //shift rest elements to the front
    for (int j = d ; j < n; j++)
    {
        a[j-d] = a[j];
    }
    //put back temp
    for (int i = n-d ; i < n; i++)
    {
        a[i] = temp[(i - (n-d))];
    }
    return a;    
}


//Optimal Approach : 
//Reverse the D and Remaining element's array individually and then again reverse the complete array

vector<int> leftRotateByDplaces(vector<int> &a, int d){

}


int main(){

    vector<int> a = {1,2,3,4,5,6,7,8};
    // leftRotate(a);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    leftRotateByD(a,3);

    for (int x = 0; x < a.size(); x++)
    {
        cout << a[x] << " ";
    }
    
    return 0;
}