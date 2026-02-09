#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int>::iterator it = v.begin();

    cout << *(it) << endl;

    it++;
     it= it+2;
     cout << *(it);
    return 0;
}