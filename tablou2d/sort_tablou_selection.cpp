#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    const int m = n;
    int A[n][m];
    //Prin selection sort
    cout << "Tablou 4x4 pentru testare:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int l = 0; l < n; l++) {
            int minn = l;
            for(int j = l; j < n; j++) {
                if(A[i][j] < A[i][minn]) minn = j;
            }
            swap(A[i][l], A[i][minn]);
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
