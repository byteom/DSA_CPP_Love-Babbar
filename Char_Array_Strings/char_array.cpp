#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter your name : ";
    cin>>ch; // the a input of many charchter at one time, its your choiuce what u entering.
     cin>> ch[50]; // taking single charchter
    cout<<"Your name is : "<<ch;
    return 0;
}