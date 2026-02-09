#include<iostream>
#include<vector>

using namespace std;

int main(){
    pair<int,int> p = {1,4};
    cout << p.first << endl;
    cout << p.second << endl;

    pair <int , pair <int, pair <int,int> > > peww = {1, {2 , { 3 , 4}}};
    cout << peww.second.second.first << " " << peww.second.first;

    return 0;
}
