//Find THe maximum and Minimum Value of some numbers using array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];

        if(array[0]<array[i]){
            int temp=array[0];
            array[0]=array[i];
            array[i]=temp;
        }
        if(array[i]==array[0])
        continue;
        if(array[1]>array[i]){
            int temp=array[1];
            array[1]=array[i];
            array[i]=temp;
        }
    }
    cout<<"Maximum Value: "<<array[0]<<endl<<"Minimum Value: "<<array[1]<<endl;

    return 0;
}

/*1 more way to solve this code

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int Max=INT_MIN;
    int Mini=INT_MAX;

    for(int i=0;i<n;i++){
        if(Max<array[i]){
            Max=array[i];
        }
        if(Mini>array[i]){
            Mini=array[i];
        }

    }
    cout<<"Maximum Value: "<<Max<<endl<<"Minimum Value: "<<Mini<<endl;

    return 0;
}*/