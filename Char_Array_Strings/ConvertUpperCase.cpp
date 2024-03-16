#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUpper(char word[]){
    int n= strlen(word);
    for(int i=0;i<n;i++){
        word[i]=word[i]-'a'+'A';
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