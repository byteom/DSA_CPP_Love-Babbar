#include<iostream>
using namespace std;

int sqrtNum(int num){
    int start=0;
    int end=num;
    int ans=-1;
    int target =num;
    int mid=(start+end)/2;
    while(start<=end){
        if(mid*mid==target){
            return mid;
        }if(mid*mid>target){
            end=mid-1;
        }else{
           ans=mid ;
           start=mid+1;
        } 
        mid=(start+end)/2;
    }
    // Added a return statement to handle cases where the loop doesn't return anything
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number : "; // Corrected the spelling of "Enter"
    cin>>num;
    int ans=sqrtNum(num);
    cout<<"Square root of "<<num<<" is "<<ans; // Added a message to display the result
    return 0;
}
