#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter no of steps"<<endl;
    cin>>n;
    for(i=0;i<n; i++){
        for(j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}