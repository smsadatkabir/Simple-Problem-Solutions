//Print Given NUmber's Factorial Using Function
#include<iostream>
using namespace std;

void Factorial(int n){
    int F=1;
    for(int i=1;i<=n;i++){
        F=F*i;
    }
    cout<<F<<endl;
}

int main(){
    int n;
    cin>>n;

    Factorial(n);
    return 0;
}