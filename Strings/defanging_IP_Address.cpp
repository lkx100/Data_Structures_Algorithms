#include <bits/stdc++.h>
using namespace std;
int main(){

    string address = "225.100.25.60";
    string ip;


    for (int i = 0; i < address.size(); i++){

        if ( address[i] == '.' ) cout << "[.]";

        else cout << address[i];

    }
    cout << endl;
    // * OR *
    // Using concatination

    for (int i = 0; i < address.size(); i++){
        if ( address[i] == '.' ){
            ip = ip + "[.]";
        }
        else {
            ip = ip + address[i];
        }
    }
    cout << ip;

    return 0;
}