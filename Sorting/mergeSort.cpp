//Merge sort uses the technique of Divide and Merge

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= right && right <= high)
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //traverse for the remaining array if any elements left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){

    int mid = (low + high)/2;
    if (low >= high) return;
    else{
    mergeSort(arr, low, mid);  //divide left half
    mergeSort(arr, mid+1, high); //divide right half
    }
    //merge both of them
    Merge(arr, low, high, mid);
     
}


int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mergeSort(arr,n);

    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << " " ;
    }
    return 0;

}