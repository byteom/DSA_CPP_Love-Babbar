// Function to find the largest quotient of the given dividend and divisor
// The function uses binary search algorithm to find the quotient efficiently
// Parameters: divisor (int) - the number to divide by, dividend (int) - the number to be divided
// Returns: int - the largest quotient of the given dividend and divisor
#include<iostream>
using namespace std;
int Quotients(int divisor, int dividend) {
    // Initialize start and end indices for binary search
    int start = 0;
    int end = dividend;

    // Initialize variable to store the largest quotient found so far
    int ans = -1;

    // Calculate the middle index for binary search
    int mid = (start + end) / 2;

    // Perform binary search to find the largest quotient
    while (start <= end) {
        // If the current mid value multiplied by the divisor is less than or equal to the dividend
        if (mid * divisor <= dividend) {
            // Update the largest quotient found so far
            ans = mid;

            // Update the start index for the next search
            start = mid + 1;
        } else {
            // Update the end index for the next search
            end = mid - 1;
        }

        // Calculate the middle index for the next search
        mid = (start + end) / 2;
    }

    // Return the largest quotient found
    return ans;
}

int main() {
    // Declare variables to store the divisor and dividend
    int divisor, dividend;

    // Prompt the user to enter the divisor and dividend
    cout << "Enter the dividend and divisor : ";
    cin >> dividend >> divisor;

    // Call the Quotients function to find the largest quotient
    int quotient = Quotients(divisor, dividend);

    // Display the largest quotient
    cout << "Quotient is : " << quotient;
}