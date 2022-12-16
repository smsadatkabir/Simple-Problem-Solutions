#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int Fac=1;

    for(int i=1;i<=x;i++){
         Fac=Fac*i;
    }
    cout<<Fac<<endl;
}