// #include<iostream>
// using namespace std;

// int sum(int arr,int n){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array: ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "The sum is " << sum(arr , n);
    
//     return 0;
// }


/*
PSEUDOCODE: Sum of digits of a number

1. Start
2. Declare integer variable n
3. Display message "Enter the number"
4. Read input n from user
5. Initialize sum = 0
6. While n > 0 do
      a. last = n mod 10        // extract last digit
      b. sum = sum + last       // add digit to sum
      c. n = n / 10             // remove last digit
7. End while
8. Print sum
9. Stop
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    n = abs(n);

    int sum = 0;

    while(n > 0){
        int last = n % 10;
        sum = sum + last;
        n = n / 10;
    }

    cout << sum << endl;
    return 0;
}