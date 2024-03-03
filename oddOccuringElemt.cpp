//Find odd occouring element in a array.
#include<iostream>


int solve(int arr[],int size){
    int s=0;
    int e= size-1;
    int mid=(e+s)/2;
    while (s<=e){
        if(s==e){
            //single element;
            return s;
        }

        // 2 Case -> mid - even or mid - odd
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }else{
                e=mid;
            }
            }else{
                if(arr[mid]==arr[mid-1])
                {
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }mid = (s+e)/2;
        }  

    } 



using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4,3,600,600,4,4};
    int size=14;
    int ans = solve(arr,size);
    cout<<"Odd occuring element is : "<<arr[ans]<<endl;
}