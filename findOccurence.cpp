//Find the first occurence of an element;

#include<iostream>
using namespace std;
int firstOccurrence(int arr[],int size,int target){
    int start= -1;
    int end=size-1;
    int store_value=0;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            store_value=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=(start+end)/2;
         
    }return store_value;
}

int main(){
    int arr[]={1,2,3,3,3,3,3,5,6,7};
    int size=10;
    int target=6;
    int indexOccurence=firstOccurrence(arr,size,target);
    cout<<"first occurence of target is at index : "<<indexOccurence<<endl;
}