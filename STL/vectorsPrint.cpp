#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10,22,33,89,12};
    for (int i = 0 ; i < 5 ; i++){
        cout << "index" << " " << i<<  " " << vec[i] << endl;
    }


    return 0;
}