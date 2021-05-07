#include <iostream>
using namespace std;
 
int main() {
    int n;
    int numsols = 0;
    int a = 0;
    cin >> n;
    int matrix[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 1) {
                ++a;
            }
        }
        if (a >= 2) {
            ++numsols;
        }
        a = 0;
    }
 
    cout << numsols << endl;
}
