#include<iostream>
#include<math.h>
using namespace std;

int Convert(int x){
    int Decimal=0,count=0;
    while(x>0){
        int lastNum=x%10;
        Decimal+=lastNum*pow(8,count);
        count++;
        x=x/10;
        
    }
    return Decimal;
}

int main(){
    int x;
    cin>>x;

    cout<<Convert(x)<<endl;


    return 0;
}