
#include <iostream>
using namespace std;
 
int main() {
    long long int flagstones;
    long long int n, m, a;
    long long int d, z;
    long long int i;
    long long int j;
    long long int k;
    long long int e;
    cin >> n >> m >> a;
 
    if (a * a >= n * m) {
        cout << 1 << endl;
    }
    else {
        i = n % a;
        if (i == 0) {
            e = n / a;
        }
        else {
            e = n / a;
            d = a * e;
            if (d + a > n) {
                ++e;
            }
        }
 
        j = m % a;
        if (j == 0) {
            k = m / a;
        }
        else {
            k = m / a;
            z = a * k;
            if (z + a > m) {
                ++k;
            }
        }
        flagstones = k * e;
        cout << flagstones << endl;
    }
}
