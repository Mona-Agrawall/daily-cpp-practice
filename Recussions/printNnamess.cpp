#include<iostream>
using namespace std;

void name(int i , int n){
    if (i < n){
        cout << "Mona" << endl;
        name (i+1 , n);
    }
    else{
        return;
    }
}


int main(){
    name(1,20);
    return 0;
}