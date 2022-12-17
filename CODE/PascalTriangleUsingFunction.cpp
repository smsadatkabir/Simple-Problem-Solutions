/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
using namespace std;
int factorial(int x){
    int F=1;
    for(int i=1;i<=x;i++){
        F=F*i;
    }
    return F;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int Ans=factorial(i)/(factorial(j)*factorial(i-j)); //nCr Calculation  Method
            cout<<Ans<<"  ";
            
        }
        cout<<endl;
    }
    return 0;
}
