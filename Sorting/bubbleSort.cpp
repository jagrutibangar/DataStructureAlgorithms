#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
// Bubble sort sorts array by swapping adjacent elements
//time complexity = O(n^2) can be optimised to O(n)

void bubbleSort(int arr[], int n){
    for (int i = n -1; i >= 1; i--)
    {   int didSwap = 0;
        for (int j = 0; j < i -1; j++)
        {
            if(arr[j] > arr[j+1]){

                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if(didSwap == 0){
            break;
        }   
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
    bubbleSort(arr,n);

    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << " " ;
    }
    return 0;
}