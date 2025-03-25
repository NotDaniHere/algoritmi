#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int A[n][m];
    cout<<"Baga tabloul cu dimensiunile inserate: \n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> A[i][j];
        }
        cout << '\n';
    }
    int minn = A[1][1];
    int maxx = A[1][1];
    int suma = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            minn = min(minn, A[i][j]);
            maxx = max(maxx, A[i][j]);
            suma+=A[i][j];
        }
    }
    cout << "Minimu " << minn << '\n' << "Maxu " << maxx << '\n' << "Suma " << suma << '\n'; 
    return 0;
}