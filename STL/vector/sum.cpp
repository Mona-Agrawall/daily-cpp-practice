#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 7, 4, 0};

    int maximum = vec[0];

    for(int i = 1; i < vec.size(); i++){
        if(vec[i] > maximum){
            maximum = vec[i];
        }
    }

    cout << maximum;
    return 0;
}
