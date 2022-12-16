//Print Fibonacci Numbers Nth Position Using Function
#include<iostream>
using namespace std;

void Fibonacci(int n){
        int First=0;
        int Second=1;
        for(int i=1;i<=n;i++){
            cout<<First<<endl;
            int nextTerm=First+Second;
            First=Second;
            Second=nextTerm;  
        }
    }


int main(){
    int n;
    cin>>n;
    Fibonacci(n);

    return 0;
}