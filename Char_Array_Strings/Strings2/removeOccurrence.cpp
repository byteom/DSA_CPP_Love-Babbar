// leeet code 1910 : Remove All Occurrences of a Substring
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include<iostream>
#include<string>
using namespace std;
 string removeOccurences(string s , string part){
    int pos = s.find(part);
    while(pos!=string::npos){
        s.erase(pos,part.length());
        pos=s.find(part);
    }return s;
 }

 int main(){
    string s;
    string part;
    getline(cin,s); 
    getline(cin,part);
    string ans = removeOccurences(s,part);
    cout<<ans;
 } 