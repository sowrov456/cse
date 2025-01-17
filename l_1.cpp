#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int arr[n];

    cout<<"Enter numbers : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of "<<n<<" numbers is : "<<sum<<endl;
}