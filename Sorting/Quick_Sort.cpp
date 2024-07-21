#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot = arr[end], i = start-1;

	for (int j = start; j <= end; j++){
		if ( arr[j] < pivot ){   
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[i], arr[end]);
	cout << "\n<< Pivot is at " << i << " position >>\n";
	return i;
}

void quickSort(int arr[], int start, int end){

	// base case
	if (start >= end)  // if one or no element is present beside pivot 
		return;  
	
	int pivot = partition(arr, start, end);

	quickSort(arr, start, pivot-1);
	quickSort(arr, pivot+1, end);
}

int main(){
	int arr[5] = {2,4,1,5,3};
	int high = 5, low = 0;
	cout << "\nBefore Sorting : ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	quickSort(arr, low, high-1);

	cout << "\nAfter Sorting : ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;
	return 0;
}