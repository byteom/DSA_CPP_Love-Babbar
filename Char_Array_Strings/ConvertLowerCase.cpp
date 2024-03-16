//Converrt lower case
#include<iostream>
#include<string.h>
using namespace std;

void convertIntoLower(char word[]){
    int n= strlen(word);
    for(int i=0;i<n;i++){
       // word[i]=word[i]-'a'+'A';  // using this formula , u can covert any case to lower case in c++
       if(word[i]>='A' && word[i]<='Z'){  // only uppercase alphabets will be converted to lowercase // for chaking all charcter is between upper case char.
           word[i]=word[i]-'A'+'a';   // only uppercase alphabets will be converted to lowercase
       }
    }
}

int main(){
    char word[100];
    cout<<"Enter the word :";
    cin>>word;
    cout<<"Upper case word"<<word<<endl;
    convertIntoLower(word);
    cout<<"upper case word : "<<word;
    return 0;
}

//Time complexity is O(n) where n is length of string because we are using linear search to compare characters from both ends of the string.
//Space complexity is O(1) because we are not using any extra space. We just use some variables to point to the start and end of the string.