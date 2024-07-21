#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number : ";
    cin >> n;
    cout<<"Your Number Triangle pattern is : \n";

    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = 0; j <= i; j++){
            cout << i+1 << "  ";
        }
        cout << "\n";
    }
    

    return 0;
}