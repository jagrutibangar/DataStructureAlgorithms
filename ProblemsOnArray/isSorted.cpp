#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

void isSorted(vector<int> &a){
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i] >= a[i -1]){
            cout << "Not sorted" << endl;
        } 
        else cout << "Sorted" << endl;
        break;
    }
    
}
int main(){

    vector <int> a = {12,34,21,1};
    isSorted(a);
    return 0;
}