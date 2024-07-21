#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int i = 0, j = 5;
    int arr[6] = {0,1,1,1,0,0};
    while ( i < j )
    {
        if ( arr[i] == 0 ) i++;
        else {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

        if ( arr[j] == 1 ) j--;
        else {
            swap(arr[j],arr[i]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}