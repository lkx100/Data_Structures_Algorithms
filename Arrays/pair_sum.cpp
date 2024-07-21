#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int s = 6;
    // for( int i=0; i<5; i++ ){

    //   for ( int j=0; j<5; j++ ){

    //      if ( arr[i]+arr[j] == s ){

    //         cout << arr[i] << " " << arr[j] << endl;
    //         arr[j] = -1;
    //         break;
    //         }
    //     }
    // }
    int i = 0, j = 0;
    while ( i+j <= 8 )
    {
        if(arr[i]+arr[j]<s) j++;
        if(arr[i]+arr[j]==s){
            cout << arr[i] <<" "<<arr[j]<<endl;
            i++;
            j=i;
        }
    }
    
    return 0;
}