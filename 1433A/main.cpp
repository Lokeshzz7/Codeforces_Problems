#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l = to_string(n).length();
        int s = ((n%10)-1)*10 + (l * (l + 1)) / 2;
        cout << s << endl;
    }
    
    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}

