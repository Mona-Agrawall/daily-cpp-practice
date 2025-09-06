// Backtracking from N to 1.


#include<iostream>
using namespace std;
void print(int i, int n){
    if(i > n){
        return;
    }
    else{
        print(i+1 , n);
        cout << i << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    print(1,n);
    return 0;
}