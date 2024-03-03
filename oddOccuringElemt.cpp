// Function to find the odd occurring element in an array
// The array is assumed to have only one odd occurring element
#include<iostream>
using namespace std;
int solve(int arr[], int size) {
    // Initialize start and end indices
    int s = 0;
    int e = size - 1;

    // Loop until start is less than or equal to end
    while (s <= e) {
        // Calculate the middle index
        int mid = (e + s) / 2;

        // Check for base case: single element
        if (s == e) {
            // Return the middle index
            return s;
        }

        // Check if the middle index is even
        if (mid % 2 == 0) {
            // If the middle element equals the next element
            if (arr[mid] == arr[mid + 1]) {
                // Move the start index to skip the next element
                s = mid + 2;
            } else {
                // Move the end index to the middle index
                e = mid;
            }
        } else {
            // If the middle element equals the previous element
            if (arr[mid] == arr[mid - 1]) {
                // Move the start index to skip the previous element
                s = mid + 1;
            } else {
                // Move the end index to the middle index
                e = mid - 1;
            }
        }
    }
}

// Main function
using namespace std;
int main() {
    // Initialize the array
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int size = 14;

    // Call the solve function to find the odd occurring element
    int ans = solve(arr, size);

    // Print the odd occurring element and its index
    cout << "Odd occurring element is : " << arr[ans] << endl;
    cout << "Odd occurring element index  is : " << ans << endl;

    return 0;
}