#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        if(i>1){
            for(int k=2;k<i+1;k++){
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
}