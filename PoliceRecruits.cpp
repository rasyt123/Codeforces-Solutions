#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    int b;
    int a = 0;
    int c = 0;
    int d = 0;
    vector<int> arr;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> b;
        arr.push_back(b);
    }

    for (int i = 0; i < t; i++) {
        if (arr[i] >= 1) {
            a += arr[i];
        } else if (arr[i] < 0 && a <= 0) {
            ++d;
        } else if (arr[i] < 0) {
            ++c;
            if (a > 0) {
                a = a - 1;
            }
        }
    }
    cout << d;

}
