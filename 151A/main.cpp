#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long total_drink = k * l / nl;
    long long total_limes = c * d; 
    long long total_salt = p /np ; 

    long long max_toasts = min(total_drink, min(total_limes, total_salt)) / n;

    cout << max_toasts << endl;

    return 0;
}