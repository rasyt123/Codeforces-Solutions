
#include <iostream>
#include <vector>
using namespace std;
 
 
int main() {
    int a = 0;
    int d = 0;
    string b;
    int c;
    cin >> c;
    cin >> b;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 'A') {
            ++a;
        } else {
            ++d;
        }
    }
    if (a > d) {
        cout << "Anton";
    } else if (d > a) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}
