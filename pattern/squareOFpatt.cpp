#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number of rows and column ";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}