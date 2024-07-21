#include <iostream>
using namespace std;
// swap is an inbuilt function in cpp to swap to numbers.
int main(){
    int size = 9;
    int arr[size] = {1,2,3,4,5,6,7,8,9};
    for (int indx = 0; indx < size; indx = indx + 2)
    {
        if ( indx + 1 < size )
        {
            swap(arr[indx],arr[indx+1]);
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}