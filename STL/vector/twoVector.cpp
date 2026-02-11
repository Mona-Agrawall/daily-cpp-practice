#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Entet the value of the n: ";
    cin >> n;
    
    vector<int> vec(n);

    for (int i=0;i<n;i++){
        cout << "Enter the value of the element: ";
        cin >> vec[i];
        cout << endl;
    }

    int minVal = vec[0];

    for(int i = 0 ; i < n ; i++){
        if(vec[i] < minVal){
            minVal = vec[i];
        }
    }

    cout << "Minimum Value: " << minVal;
    return 0;
}