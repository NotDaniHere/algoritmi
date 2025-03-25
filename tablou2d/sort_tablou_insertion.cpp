#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    const int m = n;
    int A[n][m];
    //Prin insertion sort
    cout << "Tablou 4x4 pentru testare:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {  
        for (int k = 1; k < n; k++) {
            int x = A[i][k];
            int j = k - 1;
            while (j >= 0 && A[i][j] > x) {
                A[i][j + 1] = A[i][j];
                j--;
            }
            A[i][j + 1] = x;
        }
    }
    cout << "Randurile tabloului bidimensional (sortate) sunt:\n";
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << ' ';                         
        }
        cout << endl;
    }
    
    return 0;
}
