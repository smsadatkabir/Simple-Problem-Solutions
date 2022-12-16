//Calculate The value of nCr using Function 
#include<iostream>
using namespace std;

int Factorial(int n){
    int F=1;
    for(int i=1;i<=n;i++){
        F=F*i;
    }
    return F;
}

int main(){
    int n,r;
    cin>>n>>r;

    int ans=Factorial(n)/(Factorial(r)*Factorial(n-r));

    cout<<ans<<endl;

    return 0;
}