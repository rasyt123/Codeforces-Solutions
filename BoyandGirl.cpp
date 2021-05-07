#include <iostream>
#include <string>
#include <map>
using namespace std;
 
 
int main() {
     string a;
     map<char, int> numdistinct;
     int totalchars;
     int h;
     cin >> a;
     for (int i = 0; i < a.size(); i++) {
	    if (numdistinct.count(a.at(i)) == 0) {
            numdistinct.insert({a.at(i), 1});
         }
      }
 
     for (auto item : numdistinct) {
          h = item.second;
	  totalchars += h;
     }
 
     if (totalchars % 2 == 0) {
        cout << "CHAT WITH HER!";
     }
     else {
        cout << "IGNORE HIM!";
      }
 
 
 
}
