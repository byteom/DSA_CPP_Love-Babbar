#include <iostream>
using namespace  std;

int BinarySearch(int arr[],int size,int target){
    int start=0;
    int end =size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid+1]==target){
            return mid;
        } 
        if(arr[mid-1]==target){
            return mid;
        }
        if(arr[mid]<target){
            start=mid+2;
        }else{
            end=mid-2;
        } mid= (start+end)/2;
    } return -1;
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    // sorted arr=[3,10,20,40,50,70,80]
    int size=7;
    int target=80;
    int foundTragt= BinarySearch(arr,size,target);
    cout<<foundTragt;
}