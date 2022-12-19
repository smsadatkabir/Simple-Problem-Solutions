#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int HexaDecimalToDecimal(string x){
    int Decimal=0;
    int p=1;
    int S=x.size();
    for(int i=S-1;i>=0;i--){
        
        if(x[i]>='0' && x[i]<='9'){
            Decimal+=(x[i]-'0')*p;
        }
        else if(x[i]>='A' && x[i]<='F'){
            Decimal+=(x[i]-'A'+10)*p;
        }
        p*=16;
    }
    return Decimal;

}

int main(){
    string x;
    cin>>x;
    cout<<HexaDecimalToDecimal(x)<<endl;
    return 0;
}