#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b == c or b+c == a or c+a == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}



