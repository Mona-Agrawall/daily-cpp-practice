#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the number of elements : " ;
    cin >> n;


    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++){
        cout << "Enter the element " << i << ":";
        cin >> vec[i];
        cout << endl;
    }

    cout << "Elements in the vector are :" << endl;
    for (int i = 0 ; i < n ; i++){
        cout << vec[i];
        cout << endl;
    }

    return 0;
}