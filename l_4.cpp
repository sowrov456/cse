#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, p;

    cout << "Enter rows and columns for the first matrix: ";
    cin >> m >> n;
    cout << "Enter columns for the second matrix: ";
    cin >> p;

    int mat1[m][n], mat2[n][p], result[m][p];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}
