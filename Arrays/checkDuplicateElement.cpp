#include <iostream>
using namespace std;
int checkDuplicate(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    int size = 7;
    int arr[size] = {1,2,3,2,5,6,7};
    int duplicate = checkDuplicate(arr,size);
    printf("Duplicate element is %d", duplicate);
    return 0;
}