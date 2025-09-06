#include<iostream>
using namespace std;

int cnt = 0;

void print(int n){
    if(cnt == n)
        return;

    cout << cnt << " ";
    cnt++;
    print(n);
}

int main(){
    print(1000);
    return 0;
}