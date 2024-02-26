// Include the iostream library for input and output operations
#include<iostream>

// Use the standard namespace for convenience
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) {
    // Initialize the start and end indices of the array
    int start = 0;
    int end = size - 1;

    // Calculate the middle index of the array
    int mid = (start + end) / 2;

    // While the start index is less than or equal to the end index
    while (start <= end) {
        // If the middle element is the target element
        if (arr[mid] == target) {
            // Return the index of the target element
            return mid;
        }
        // If the middle element is less than the target element
        else if (arr[mid] < target) {
            // Update the start index to be one position after the middle index
            start = mid + 1;
        }
        // If the middle element is greater than the target element
        else {
            // Update the end index to be one position before the middle index
            end = mid - 1;
        }

        // Recalculate the middle index
        mid = (start + end) / 2;
    }

    // If the target element is not found, return -1
    return -1;
}

int main() {
    // Declare an array of integers
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Prompt the user to enter the target element
    int target;
    cout << "Enter the target element";
    cin >> target;

    // Call the binarySearch function with the array, its size, and the target element
    int targetFound = binarySearch(arr, size, target);

    // If the target element is not found
    if (targetFound == -1) {
        // Output that the target element is not found
        cout << "target not found";
    }
    // If the target element is found
    else {
        // Output the index of the target element
        cout << "target found at index :-" << targetFound;
    }    
}