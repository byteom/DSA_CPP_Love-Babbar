#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUpper(char word[]){
    int n= strlen(word);
    for(int i=0;i<n;i++){
       // word[i]=word[i]-'a'+'A';  // using this formula , u can covert any case to upper case in c++
       if(word[i]<='z' && word[i]>='a'){  // only lowercase alphabets will be converted to uppercase
           word[i]=word[i]-'a'+'A';   // only lowercase alphabets will be converted to uppercase
       }
    }
}

int main(){
    char word[100];
    cout<<"Enter the word :";
    cin>>word;
    cout<<"lowe case word"<<word<<endl;
    convertIntoUpper(word);
    cout<<"upper case word : "<<word;
    return 0;
}