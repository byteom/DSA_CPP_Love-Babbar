// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100];
//     cout<<"Enter your name : ";
//     cin>>ch; // the a input of many charchter at one time, its your choiuce what u entering.
//      cin>> ch[50]; // taking single charchter
//     cout<<"Your name is : "<<ch;
//     return 0;
// }

//Example for verfiying null char 

// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100 ];
//     cout<<"Enter your name : ";
//     cin>>ch;
//     for(int i=0;i<7;i++){
//         cout<<"index "<<i<<" value "<<ch[i]<<endl;
//     }

//     int value =(int)ch[5];
//     int value1 =(int)ch[6];
//     cout<<"Value is : "<<value<<endl; // ASCII value of ch[5] will be store in integer variable 'value' , its null = 0
//     cout<<"Value is : "<<value1<<endl; // ASCII value of ch[6] will be store in integer variable 'value' , its null = 0
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cin>> ch;
    cout<<ch;
}