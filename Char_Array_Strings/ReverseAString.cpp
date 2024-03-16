#include<iostream>
#include<string.h> // Include for strlen function
#include<algorithm> // Include for std::swap
using namespace std;

int getLength(char name[]) {
    int length = 0;
    int i = 0;
    while (name[i] != '\0') {   // Run the iteration on the array until null character is found and increase the length.
        length++;
        i++;
    }
    return length;
}

void reverseArrayChar(char name[]) { // Change return type to void
    int length = getLength(name);
    int i = 0;
    int j = length - 1;
    while (i <= j) {
        std::swap(name[i], name[j]); // Use std::swap from algorithm header
        i++;
        j--;
    }
}

int main() {
    char name[100];
    cout << "Enter the name: ";
    cin.getline(name, 40);

    cout << "Length is " << getLength(name) << endl;  // Using linear search
    cout <<"without reverse : "<<name<<endl;
    reverseArrayChar(name); // Reverse the array of characters
    cout << "Reversed Name is : " << name << endl; // Print the reversed name
    cout << "Length is " << strlen(name) << endl; // Using strlen function
    return 0;
}
