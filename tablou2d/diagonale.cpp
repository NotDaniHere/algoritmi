#include <iostream>
using namespace std;
int main() {
    //Setu de diagonale care incepe din stanga sus (matrice patrata sigma)
    int suma_stanga = 0, suma_dreapta = 0;
    int n; cin >> n;
    int A[n][n]; fill(*A, *A+n*n, 0);
    //Introducere in matrice
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    //Diagonala stanga
    /*
    Incepe de la 0,0 si termina la n,n
    */
    bool achievedMax = false;
    int delta = 0;
    int x = 0, y = 0;
    int minusCounter = 0;
    for (int d = 0; d < 2 * n - 1; d++) {
        int x, y;
        if (d < n) {
            // First half: diagonals start at (d, 0)
            x = d;
            y = 0;
        } else {
            // Second half: diagonals start at (n-1, d - (n-1))
            x = n - 1;
            y = d - (n - 1);
        }
        
        int currentSum = 0;
        // Traverse the diagonal until out of matrix bounds.
        while (x >= 0 && y < n) {
            currentSum += A[x][y];
            cout << x << " " << y << "\n";
            x--;   // move up
            y++;   // move right
        }
        cout << "Diagonala " << d << " are suma " << currentSum << "\n";
    }
    

    return 0;
}