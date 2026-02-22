#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,40};
vector<int>::iterator it = v.begin();

cout << *(it);

    return 0;
}
