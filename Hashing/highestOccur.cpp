#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // pre-computation
    int hash[100000] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    // find highest occurring number
    int maxFreq = 0;
    int element = -1;

    for(int i=0;i<n;i++){
        if(hash[arr[i]] > maxFreq){
            maxFreq = hash[arr[i]];
            element = arr[i];
        }
    }

    cout << "Highest occurring number: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}