#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


//This approach gives the Time Complexity as O(2N) 
int SecLarNum(vector<int> &a){
    int largest = a[0];
    for (int i = 0; i < a.size()-1; i++)
    {
     if(a[i] > largest){
        largest = a[i];
    }   
    }
    int seclargest = a[0];
    for (int j = 1; j < a.size()-1; j++)
    {
        if(a[j] > seclargest && a[j] != largest){
            seclargest = a[j];
        }
    }
    return seclargest;   
}


//This approach gives the answer in O(N) time complexity
int secLargest(vector<int> &a){
    int largest = a[0];
    int seclar = -1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > largest)
        {
           seclar = largest;
           largest = a[i];
        }
        else if (a[i] < largest && a[i] > seclar){
            seclar = a[i];
        } 
    }
    return seclar;
}


//Finding the second smallest number

int ssmallest(vector <int> &a){
    int smallest = a[0];
    int ssmall = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] < smallest ){
            ssmall = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < ssmall){
            ssmall = a[i];
        }
    }
    return ssmall;
}


int main(){
    int n;
    cin >> n;
    vector <int> a;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }
    
    //cout << SecLarNum(a) << endl;
    cout << secLargest(a) << endl;
    cout << ssmallest(a) << endl;

    return 0;
}