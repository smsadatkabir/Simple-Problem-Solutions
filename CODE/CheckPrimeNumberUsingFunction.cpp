//Checking prime number between two Numbers and print the prime numbers
#include<iostream>
using namespace std;

bool Prime(int Num){
    for(int i=2;i<Num;i++){
        if(Num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(Prime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}