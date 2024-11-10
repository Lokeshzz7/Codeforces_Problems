#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> ans;
        int mul = 1;

        while(n>0){
            if(n%10!=0){
                ans.push_back((n%10)*mul);
            }
            n = n/10;
            mul = mul*10;
        }

        cout << ans.size() << endl;
        for(auto& i : ans){
            cout << i << " ";
        }
        cout << endl;
    }

    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}



