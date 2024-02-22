#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid = (start+mid)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        } mid=(start+end)/2;
    } return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int target;
    cout<<"Enter the target element";
    cin>>target;
    int targetFound=binarySearch(arr,size,target);
    if(targetFound== -1){
        cout<<"target not found";

    }else{
        cout<<"target found at index :-"<<targetFound;
    }
}