//Conversion Binary To Decimal
#include<iostream>
#include<math.h>
using namespace std;

int Conversion(int x){
    int Decimal=0,count=0;
    while(x>0){
        int lastNum=x%10;
        Decimal=Decimal+lastNum*pow(2,count);
        count++;
        x=x/10;
    }
    return Decimal;
}

int main(){
    int x;
    cin>>x;
    cout<<Conversion(x)<<endl;

    return 0;
}