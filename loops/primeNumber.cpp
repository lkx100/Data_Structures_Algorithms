#include <iostream>
using namespace std;
int main(){
    int n, i = 2, a = 0;
    cout << "Enter any number : "; 
    cin>>n;
    // for ( i = 2; i < n-1; i++){
    //     if ( n % i == 0 ) a = 1;
    //     else a = 0;
    // }
    // if ( a = 1 ) cout<< n <<" is divible by "<<i<<"\nTherefoe NOT a Prime Number."<< endl;
    // else cout<< n <<" is a Prime Number"<< endl;

    while ( i < n ){
        if ( n % i == 0 ){
            cout << n << " is divisible by "<< i <<"\nand hence It is a COMPOSITE number"<< endl;
            break;
        }
        else {
            cout << n << " is a PRIME number"<<endl;
            break;
        }
        i++;
    }
    return 0;
}