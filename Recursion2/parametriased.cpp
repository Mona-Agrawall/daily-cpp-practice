#include<iostream>
using namespace std;

void summ(int i, int sum){
    if(i<1){
        cout << "The sum is: " << sum;
        return;
    }
    else{
        summ(i-1 , sum + i);
    }

}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    summ(n,0);
    return 0;
}