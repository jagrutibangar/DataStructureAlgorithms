#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1 ;
    }
    
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << c << " Occurs "<< hash[c-'a'] << " Times " << endl;
    }

    return 0;
}