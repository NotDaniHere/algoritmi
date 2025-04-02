#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int A[n][n];
    // Initialize matrix A to 0 (if needed)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }
    
    // Read matrix elements.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    // ======= Diagonals from bottom-left to top-right =======
    // These are the anti-diagonals that start on the left side.
    cout << "Diagonals from bottom-left to top-right:\n";
    for (int d = 0; d < 2 * n - 1; d++) {
        int x, y;
        if (d < n) {
            // For the first n diagonals, start on the left column.
            x = d;
            y = 0;
        } else {
            // For the remaining diagonals, start on the bottom row.
            x = n - 1;
            y = d - (n - 1);
        }
        
        int currentSum = 0;
        // Traverse upward and to the right.
        while (x >= 0 && y < n) {
            currentSum += A[x][y];
            cout << "(" << x << ", " << y << ") ";
            x--;
            y++;
        }
        cout << " => Sum: " << currentSum << "\n";
    }
    
    // ======= Diagonals from top-right to bottom-left =======
    // These are the anti-diagonals that start on the right side.
    cout << "\nDiagonals from top-right to bottom-left:\n";
    // First, starting from the top row (rightmost to leftmost).
    for (int startCol = n - 1; startCol >= 0; startCol--) {
        int i = 0, j = startCol;
        int currentSum = 0;
        while (i < n && j >= 0) {
            currentSum += A[i][j];
            cout << "(" << i << ", " << j << ") ";
            i++;
            j--;
        }
        cout << " => Sum: " << currentSum << "\n";
    }
    // Then, starting from the right column (excluding the top corner, which is already processed).
    for (int startRow = 1; startRow < n; startRow++) {
        int i = startRow, j = n - 1;
        int currentSum = 0;
        while (i < n && j >= 0) {
            currentSum += A[i][j];
            cout << "(" << i << ", " << j << ") ";
            i++;
            j--;
        }
        cout << " => Sum: " << currentSum << "\n";
    }
    
    return 0;
}
