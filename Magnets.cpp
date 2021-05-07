#include <iostream>
#include <vector>
 
using namespace std;
int main() {
    int t;
    int b = 0;
    int c = 1;
    int e;
    int f;
    vector<int> yes;
    vector<int>::iterator i;
    cin >> t;
    while (t > 0) {
        cin >> e;
        yes.push_back(e);
        --t;
    }
    for (int i = 0; i < yes.size(); i++) {
        if (i + 1 > yes.size() - 1) {
            break;
        }
        if (yes[i] != yes[i + 1]) {
            ++c;
        }
    }
    cout << c;
 }
