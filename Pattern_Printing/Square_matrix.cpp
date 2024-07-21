#include <iostream>
using namespace std;
int main(){
    int n, i , j ;
    cout << "ENter any number : ";
    cin >> n;
    cout << "Your Pattern is : "<< endl;
    // while ( i < n ){
    //     while ( j < n ){
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Or with For Loop

    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= n; j++){
            cout << " "<<i;
        }
        cout <<"\n";
    }
    
    
    return 0;
}