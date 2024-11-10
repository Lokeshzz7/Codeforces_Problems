#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> points(n);
    for(int i =0;i<n;i++){
        cin >> points[i];
    }
    int maxi = points[0];
    int mini = points[0];
    int count = 0;

    for(int i =1;i<n;i++){
        if(points[i]>maxi){
            maxi = points[i];
            count+=1;
        }
        if(points[i]<mini){
            mini = points[i];
            count+=1;
        }
    }
    cout << count << endl;


    // for(auto& i:v){

    //     cout << i << endl;
    // }
    
    return 0;
}



