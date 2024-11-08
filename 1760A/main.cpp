#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    int median = 0;
    for(int i = 0;i<t;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if((a > b and a < c) or (a < b and a > c)){
            median = a;
        }else if((b > a and b < c) or (b < a and b > c)){
            median = b;
        }else{
            median = c;
        }
        cout << median << endl;
    }
    
    // for(auto& i:v){
    //     cout << i << endl;
    // }
    
    return 0;
}

