#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no of steps"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        for(j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        for(j=0;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}