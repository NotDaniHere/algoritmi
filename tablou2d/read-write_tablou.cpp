#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int A[n+1][m+1];
    cout<<"Baga tabloul cu dimensiunile inserate: \n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> A[i][j];
        }
        cout << '\n';
    }

    cout << "Tabloul tau: \n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}