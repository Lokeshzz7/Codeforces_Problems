#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    while(n--){
        string temp;
        cin >> temp;
        if (temp.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x <<endl;
}
