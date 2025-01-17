#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cout<<"Enter target : ";
    cin>>target;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==target){
                cout<<"["<<i<<" , "<<j<<"]"<<endl;
                break;
            }
        }
    }
    
}