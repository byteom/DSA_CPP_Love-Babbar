int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i] != '\0'){   // run the itteration on the array until null array is found and incrse the i++ and leanth .
        length++;
        i++;
    }
    return length;
}


#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter the name";
    cin.getline(name,40);

    cout<<"Length is "<<getLength(name)<<endl;  // using linear search
    cout<<"length is "<<strlen(name)<<endl; // using singlee function
    return 0;
}