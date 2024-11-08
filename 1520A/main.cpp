#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        set<char> counts;
        char curr = s[0];
        bool res = false;
        for(auto& a : s){
            if (a!=curr and counts.count(a)){
                res = true;
                break;
            }
            
            counts.insert(a);
            curr = a;
        }

        if (res) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}

