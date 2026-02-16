#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid size";
        return 0;
    }

    vector<int> vec(n);

    // Take input
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int maximum = vec[0];

    for(int i = 1; i < n; i++){
        if(vec[i] > maximum){
            maximum = vec[i];
        }
    }

    cout << "Maximum element: " << maximum;

    return 0;
}
