/*START
INPUT n (size of array)
READ n elements into array arr
CALCULATE expected_sum = n*(n+1)/2
SET actual_sum = 0
FOR each element in arr
    actual_sum = actual_sum + element
END FOR
missing_number = expected_sum - actual_sum
PRINT missing_number
END
*/
#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for(int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    cout << "The missing number is: "<< expected_sum - actual_sum;

    return 0;
}