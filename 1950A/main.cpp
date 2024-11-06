#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string>v(t);
    for(int i = 0;i<t;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if (a<b and b<c) v[i] = "STAIR";
        else if (a<b and b>c) v[i] = "PEAK";
        else v[i] = "NONE";
    }
    
    for(auto& i:v){
        cout << i << endl;
    }
    
    return 0;
}

