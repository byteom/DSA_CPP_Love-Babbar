  //peak index in a mountain array = LeetCode
 #include<iostream>
 using namespace std;

int peakElement(int arr[],int size){
    int start =0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;  //start searching in right
        }else{
            end=mid;  
        } mid=(start+end)/2;
    } return start;
}
 int main(){
     int arr[]={1,2,3,4,5,3,2,1};
     int size=8;
    int peakelement = peakElement(arr,size);
    cout<<peakelement;
 }