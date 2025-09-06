#include<iostream>
using namespace std;

void print(int n , int i){
    if(n<i){
        return;
    }
    else{
        cout << n << endl;
        print(n-1 , i);
    }
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n,1);
    return 0;
}