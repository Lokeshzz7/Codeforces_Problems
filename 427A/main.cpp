#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 0;
    int police = 0;
    while(n--){
        int num;
        cin >> num;
        if(num == -1){
            if(police==0){
                ans+=1;
            }else{
                police-=1;
            }
        }else{
            police += num;
        }
    }
    cout << ans << endl;

    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}



