#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int t;
  int b;
  int s = 0;
  int d = 0;
  int turn = 0;
  cin >> t;
  vector<int> arr;
  for (int i = 0; i < t; i++) {
    cin >> b;
    arr.push_back(b);
  }
  while (arr.size() != 0) {
    if (turn == 0) {
      if (arr[arr.size() - 1] > arr[0]) {
        s+= arr[arr.size() - 1];
        arr.pop_back();
      } else {
        s+= arr[0];
        arr.erase(arr.begin());
      }
      turn = 1;
    } else if (turn == 1) {
      if (arr[arr.size() - 1] > arr[0]) {
        d += arr[arr.size() - 1];
        arr.pop_back();
      } else {
         d+= arr[0];
         arr.erase(arr.begin());
      }
      turn = 0;
    }
  }
