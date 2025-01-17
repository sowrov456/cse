#include<bits/stdc++.h>
using namespace std;

void show_matrix(int m,int n){
    int arr[m][n];
    cout << "Enter the values for the matrix : \n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout << "\nThe entered matrix is:" << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m,n;
    cout << "Enter the number of rows: ";
    cin>>m;
    cout << "Enter the number of columns: ";
    cin>>n;
    show_matrix(m,n);
}