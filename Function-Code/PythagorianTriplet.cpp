//Check Pythagorian Triplet 
#include<iostream>
#include<math.h>
using namespace std;
bool Check(int a,int b,int c){
    if(b>a && b>c){
        int temp=a;
        a=b;
        b=temp; 
    }
    else if(c>a && c>b){
        int temp=a;
        a=c;
        c=temp;
    }
    if(pow(a,2)==pow(b,2)+pow(c,2)){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(Check(x,y,z)){
        cout<<"Pythagorian Triplet "<<endl;
    }
    else{
        cout<<"Not Pythagorian Triplet"<<endl;
    }

    return 0;
}