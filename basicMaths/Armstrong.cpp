#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int dup = n;
    int sum = 0;
    while (n>0){
        int last = n%10;
        sum = sum + (last*last*last);
        n = n/10;
    }
    cout << "Sum val: " << sum << endl;
    cout << "original val: " << dup << endl;

    if(dup == sum){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}