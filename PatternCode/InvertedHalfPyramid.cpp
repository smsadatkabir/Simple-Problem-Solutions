//Make Inverted Half Pyramid take size of pyramid from user
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}