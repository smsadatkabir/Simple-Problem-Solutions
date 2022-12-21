//Binary Search is use for fast Finding ,The Time Comlexity of Binary Search is Less Than O(n)
#include<iostream>
using namespace std;

int BinarySearch(int array[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(array,n,key)<<endl;
    return 0;
}