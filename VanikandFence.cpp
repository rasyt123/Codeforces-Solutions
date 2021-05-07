
#include <iostream>
#include <vector>
using namespace std;
 
 
int main() {
    int n;
    int h;
    int w = 0;
    int piece;
    vector<int> arr;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> piece;
        arr.push_back(piece);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > h) {
            w += 2;
        } else {
            ++w;
        }
    }
    cout << w;
 
 
}
