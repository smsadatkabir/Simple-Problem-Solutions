#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int x){
    int Binary=0;
    int p=1;
    while (p<=x){
        p=p*2;
    }
    p/=2;

    while (p>0)
    {
        int firstNum=x/p;
        x-=firstNum*p;
        p/=2;
        Binary=Binary*10+firstNum;
        
    }
    
    return Binary;
}

int main(){
    int x;
    cin>>x;
    cout<<DecimalToBinary(x)<<endl;


    return 0;
}