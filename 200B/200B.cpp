#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i = 0;i<n;i++){
        cin >> l[i];
    }
    double sum = accumulate(l.begin(),l.end(),0);
    double ans = sum/n;
    cout << fixed << setprecision(12) << ans << endl;
}

