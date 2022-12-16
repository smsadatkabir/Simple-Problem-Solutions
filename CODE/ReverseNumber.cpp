#include<iostream>
using namespace std;

int main(){
    int x,rev=0,rem;
    cin>>x;
    while(x>0){
         rem=x%10;
         rev=rev*10+rem;
         x=x/10;
    }
    cout<<rev<<endl;

    return 0;
}