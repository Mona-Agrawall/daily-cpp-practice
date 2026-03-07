// minimum and maximum
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the n: ";
    cin>>n;
    int array[n];

    cout << "Enter the elements: ";
    for(int i = 0; i <n; i++){
        cin >> array[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(array[i]<min){
            min = array[i];
        }
        if(array[i] > max){
            max = array[i];
        }
    }

    cout << "Minimum value is: " << min << endl;
    cout << "Maximum value is: " << max;
    return 0;
}