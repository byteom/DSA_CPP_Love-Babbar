//Total number of occurence
#include<iostream>
using namespace std;

int firstOccurrence(int arr[],int size,int target){
    int temp=-1;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
              temp=mid;
             end=mid-1;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            end =mid-1;
        } mid=(start+end)/2;
} return temp;
}

int secondOccurrence(int arr[],int size,int target){
    int start=0;
    int temp=-1;
    int end=size-1;
   int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            temp=mid;
             start=mid+1;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        } mid=(start+end)/2;
    }return temp;
}


int main(){
    int arr[]={1,2,3,3,3,3,3,5,6,7};
    int size=10;
   int target=3;
   int totalOcc1 = firstOccurrence(arr,size,target);
    int totalOcc2=secondOccurrence(arr,size,target);
  cout<<(totalOcc2-totalOcc1)+1;

}
