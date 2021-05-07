#include <iostream>
#include <string>
 
using namespace std;
int main() {
 string a;
 string b;
 
 
 cin >> a;
 cin >> b;
 
 for (int i = 0; i < a.size(); i++) {
     a.at(i) = tolower(a.at(i));
 }
 
 for (int i = 0; i < b.size(); i++) {
   b.at(i) = tolower(b.at(i));
}
   if (a == b) {
     cout << "0";
   }
   else {
 
    for (int i = 0; i < a.size(); i++) {
	    if (a.at(i) > b.at(i)) {
	        cout << "1";
	        break;
	    }
	    else if (a.at(i) == b.at(i)) {
           continue;
         }
	    else {
            cout << "-1";
	        break;
	    }
        }
   }
