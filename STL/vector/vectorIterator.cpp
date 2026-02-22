#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,40};
vector<int>::iterator it = v.begin();

for ( vector<int>::iterator it = v.begin() ; it < v.end() ; it++){
    cout << *(it) << "    " << endl;
}

cout << "Using auto" << endl;

for( auto it = v.begin();it < v.end() ; it++){
    
    cout << *(it) << " ";
}

    return 0;
}
