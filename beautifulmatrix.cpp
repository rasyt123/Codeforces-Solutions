#include <iostream>
using namespace std;
 
int main() {
    int matrix[5][5];
    int matrixbeautifucol;
    int matrixbeautifulrow;
    int numshifts = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                matrixbeautifulrow = i;
                matrixbeautifucol = j;
            }
        }
    }
    if (matrixbeautifucol > 2) {
        for (int i = matrixbeautifucol; i > 2; i--) {
            ++numshifts;
        }
    } else if (matrixbeautifucol < 2) {
        for (int i = matrixbeautifucol; i < 2; i++) {
            ++numshifts;
        }
    }
    if (matrixbeautifulrow > 2) {
        for (int i = matrixbeautifulrow; i > 2; i--) {
            ++numshifts;
        }
    } else if (matrixbeautifulrow < 2) {
        for (int i = matrixbeautifulrow; i < 2; i++) {
            ++numshifts;
        }
    }
    cout << numshifts << endl;
 
