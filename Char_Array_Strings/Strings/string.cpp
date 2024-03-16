#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
   // cin>>str;
   getline(cin, str);
    cout<<str;
    cout<<"length :"<<str.length()<<endl; // length of the string
    cout<<"is empty :"<<str.empty(); // check if the string is empty
    cout<<"is not empty :"<<!str.empty()<<endl; // check if the string is not empty
    str.push_back('A');
    //cout<<str;
    str.pop_back();
   // cout<<str;
    cout<<str.substr(0,6)<<endl;  // print a substring from index 0 to
    return 0;
}