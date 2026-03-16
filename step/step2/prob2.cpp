#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> arr(n);

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            arr[i-1] = "FizzBuzz";
        }
        else if(i % 3 == 0){
            arr[i-1] = "Fizz";
        }
        else if(i % 5 == 0){
            arr[i-1] = "Buzz";
        }
        else{
            arr[i-1] = to_string(i);
        }
    }

    return arr;
}

int main(){
    int n;
    cin >> n;
    vector<string> result = fizzBuzz(n);

    for(string s : result){
        cout << s << " ";
    }

    return 0;
}