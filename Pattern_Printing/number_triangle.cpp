#include <iostream>
using namespace std;
int main(){
    int n, count = 1;
    cout<<"Enter any number : ";
    cin >> n;
    cout<<"Your Number Triangle pattern is : "<< endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << i+1 <<" ";
            // or
            //cout << count <<" ";
        }
        cout << "\n";
        //count++;
    }
    

    return 0;
}