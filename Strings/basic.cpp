#include <iostream>
using namespace std;
int main(){

    char arr[] = {'a','p','p','l','e'};
    
    // ! Method I
    //cout << arr;

    // ! Method II
    // for (int i = 0; i < 6; i++){
    //     cout << arr[i];
    // }
    
    // ! Method III
    // char brr[10];
    // cin >> brr;
    // cout << brr;

    // *** STRINGS ***
    // ** Strings are dynamic when compared with char array (like vector) 

    string s ;
    // cin >> s;  // Disadvantage -> cin will read after you press enter/tab
    getline(cin, s);  // getlinr() will read spaces also
    cout << s;

    return 0;
}