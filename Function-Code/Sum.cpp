//Calculate sum of first n natural Numbers
#include<iostream>
using namespace std;

int Sum(int n){
    int sum=(n*(n+1))/2;
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;
    
    return 0;
}