#include <iostream>
using namespace std;
void array( int arr[], int size ){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    int brr[n];
    array(brr, n);
    
    return 0;
}