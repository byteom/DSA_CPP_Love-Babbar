//Palindrome Check
// as TYPE OF STRING WHICH  same pronounce from left to right or right to left is same. ex noon or madam . is palindrome
#include<iostream>
#include<string.h>
using namespace std;

int checkPalindrom(char word[]){
    int n =strlen(word);
    int i=0;
    int j=n-1;
    while(i<=j){
        if(word[i]!=word[j]){
            i++;
            j--;
            return false;
        }
        else{
            i++;
            j--;
        }
    }return true;
}

int main(){
    char word[100];
    cout<<"Enter the word : ";
    cin>>word;
     if(checkPalindrom(word)==true){
        cout<<"palindrome";
     }else{
        cout<<"not palindrome";
     }
    return 0;

}

// Time complexity is O(n) where n is length of string because we are using linear search to compare characters from both ends of the string.
// Space complexity is O(1) because we are not using any extra space. We just use some variables to point to the start and end of the string. .. 