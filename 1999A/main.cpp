#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << (n / 10) + (n % 10) << endl;
    }
    
    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}

