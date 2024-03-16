#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char sentence[] ){
    int i=0;
    int n=strlen(sentence); // checking length
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){ //check condition and replace
            sentence[i]='@';// replace with @
        }
    }
}

int main(){
    char sentence[100];
    cout<<"enter the sentence: "<<endl;
    cin.getline(sentence,100); // get the input from user
    cout<<"this is old sentence : -"<<sentence<<endl;
    replaceSpaces(sentence);  // call the function
    cout<<sentence<<endl; // print the function
    return 0;

}

// Time Complexity of this code is O(n) where n is size of string because we are iterating through the whole string.
// Space Complexity is O(1) because we are not using any extra space. We are just replacing the spaces in place of other characters
