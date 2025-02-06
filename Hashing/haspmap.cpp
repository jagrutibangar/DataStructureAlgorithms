// Hash Map are consist of a data structure named Map in STL in cpp
// Map stores map<number of array, index of number>

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //declare a map 
    map<int, int> m;
    for (int i = 0; i < n; i++){
        m[a[i]] ++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << num << "Occurs" << m[num] << "Times" << endl;
    }
    return 0;
}