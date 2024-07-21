#include <bits/stdc++.h>
using namespace std;
int binaryFunction(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    //int mid = ( start + end ) / 2;
    int mid = start + ( end - start ) / 2;

    /* 
        it is clear that --> start+(end-start)/2 == (start+end)/2
        but what if value of (start+end) > INT_MAX, which is not possible
        So to solve this we write start+(end-start)/2 such that (end-start) 
        is never greater than INT_MAX.
    */

    while ( start <= end )
    {
        if ( arr[mid] == key ) {
            return mid;
        }

        if ( key > arr[mid] ) {
            start = mid + 1;
        }

        if ( key < arr[mid] ){
            end = mid - 1;
        }

        mid = ( start + end ) / 2;
    }
    
    return -1;
}
int main(){
    int even[6] = {2,9,10,13,15,20};
    int odd[9] ={1,2,3,4,5,6,7,8,9};

    int index_even = binaryFunction(even,6,21);
    int index_odd = binaryFunction(odd,9,8);

    //cout << even[index_even] << endl;

    cout << "15 is present in index "<<index_even <<" and 8 is in index "<<index_odd<<endl;

    return 0;
}