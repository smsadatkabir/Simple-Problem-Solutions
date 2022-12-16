#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    int sum=0;
    int Orginal=x;
    while(x>0){
        int lastNumber=x%10;
       sum+=pow(lastNumber,3);
       x=x/10;
    }
    if(sum==Orginal){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong "<<endl;
    }
    return 0;
}