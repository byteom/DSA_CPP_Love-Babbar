#include<iostream>
#include<string>
using namespace std;

bool compareString(string a, string b){
    if(a.length()==b.length()){
        int j=0;
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[j]){
                return false;
            }j++;
        }
    }else{
        return false;
    }return true;
}
int main(){
    string a =  "love";
    string b=  "love";

    bool result =compareString(a,b);
    if(result==true){
        cout<<"truee";
    }else{
        cout<<"falsee";
    }

    return 0;
}