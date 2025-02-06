#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
// Selection sort select the minimum element in the array and swaps it to the front of the array
// Time Complexity = (n^2) (polynomial time complexity) 

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-2; i++)
    {   int mini = i;
        for (int j = i; j < n-1; j++)
        {
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;    
    } 
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);

    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << " " ;
    }
    


    return 0;
}