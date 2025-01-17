#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int a[n+1];
    cout << "Enter the elements:\n";
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }

    bool duplicateFound = false;

    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) { 
            if (a[i] == a[j]) {
                cout << "Duplicate element found: " << a[i] << endl;
                duplicateFound = true;
                break; 
            }
        }
        if (duplicateFound) {
            break; 
        }
    }
    if (!duplicateFound) {
        cout << "No duplicate elements found." << endl;
    }
   
}
