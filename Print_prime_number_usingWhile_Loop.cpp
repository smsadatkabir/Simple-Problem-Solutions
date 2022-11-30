//Print All prime Numbers Till N with While Loop


#include<iostream>
using namespace std;

int main(){
    int n,num=2;
    cin>>n;

    while(num<=n){
        int div=2;

            while(div<num){

                if(num%div==0){
                    num++;
                }
                else{
                  div++;
                }
            }
            if(num>n){
                break;
            }
            cout<<num<<endl;
            num++;

        }
    }