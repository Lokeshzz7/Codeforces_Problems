#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> segs = {{0, 0}, {m, m}};

        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            segs.push_back({a, b});
        }

        sort(segs.begin(), segs.end());


        bool canShower = false;
        for (int i = 1; i < segs.size(); ++i) {
            if (segs[i].first - segs[i - 1].second >= s) {
            cout << "YES" << endl;
            canShower = true;
            break;
            }
        }
        if (!canShower) {
            cout << "NO" << endl;
        }
        }

    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}



