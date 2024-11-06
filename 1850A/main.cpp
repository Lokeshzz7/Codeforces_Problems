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
        if (a+b >= 10 or b+c >= 10 or a+c) v[i] = "YES";
        else v[i] = "NO";
    }
    
    for(auto& i:v){
        cout << i << endl;
    }
    
    return 0;
}

