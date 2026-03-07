#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    // yaha pe hum hash naam ka ek array bana rahe hain and we are initilaizing that with 0.
    int hash[26] = {0};

    // yaha pe we are going through an entire string and jo jo letter aayega uss uss box mein hum value add kar denge
    for(int i=0 ; i < s.size() ; i++){
        hash[s[i] - 'a']++;
    }
    // this is for ki humein kitne questions puchne hain
    int q;
    cin >> q;
    // ye loop chalega jo jo query hogi uske hash wale dabbe mein jaake uski value ko fetch kar lenge hum.
    while(q--){
    char c;
    cin >> c;
    cout << hash[c - 'a'] << endl;
    }
    return 0;
}