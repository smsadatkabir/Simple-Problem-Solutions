#include<iostream>
using namespace std;

int main(){
    int n;
    bool prime=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime Number"<<endl;
            prime=1;
            break;
        }
    }
    if(prime==0){
        cout<<"Prime Number"<<endl;
    }
}