#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int A[n+1][n+1];
    cout<<"Baga tabloul cu dimensiunile 4x4: \n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Tabloul tau: \n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }
    int sumaI = 0, sumaII = 0, sumaIII = 0, sumaIV = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            if(j > i && j < n+1-i) {
                sumaI += A[i][j];
            }
            else if(j < i && j < n+1-i) {
                sumaII += A[i][j];
            }
            else if(j < i && j > n+1-i) {
                sumaIII += A[i][j];
            }
            else if(j > i && j > n+1-i) {
                sumaIV += A[i][j];
            }
        }
    }

    cout << "Suma sector I (I sector): " << sumaI << endl;
    cout << "Suma sector II (II sector): " << sumaII << endl;
    cout << "Suma sector III (III sector): " << sumaIII << endl;
    cout << "Suma sector IV (IV sector): " << sumaIV << endl;




    return 0;
}