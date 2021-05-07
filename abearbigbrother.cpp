#include <iostream>
using namespace std;
 
 
int main() {
     int limakweight;
     int bobweight;
     int a = 0;
     int b = 0;
     int x = 0;
 
     cin >> limakweight >> bobweight;
 
 
     while (true) {
        x++;
	a = 3 * limakweight;
     	limakweight = a;
	b = 2 * bobweight;
	bobweight = b;
	    if (a > b) {
                break;
	    }
     }
     cout << x << endl;
 
 
}
