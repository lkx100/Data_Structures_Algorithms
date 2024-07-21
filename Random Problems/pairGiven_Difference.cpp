#include <bits/stdc++.h>
using namespace std;
void pairDiff(vector<int> arr, int diff){
    int start = 0, end = start+1, a = 0;
    pair<int,int> p;
    while ( end < arr.size() ){  // end will trverse till end of the array/vector
        if ( arr[end] - arr[start] == diff ){
            p.first = start;
            p.second = end;
            a = 1;
            break;
        }
        if ( arr[end] - arr[start] > diff )  start++;
        if ( arr[end] - arr[start] < diff ) end++;
    }
    if ( a==1 ) {
        cout << "Indexes = [ " << p.first << " , " << p.second <<" ]" << endl;
        cout << "Elements = [ " << arr[p.first] << " , " << arr[p.second] <<" ]" << endl;
    }
    else {
        cout << "No such pairs possible" << endl;
    }
}
int main(){
    vector<int> arr ={5,10,3,2,50,80};
    int diff = 75;
    // sorting to apply 2 pointer algorithm
    sort(arr.begin(), arr.end());
    pairDiff(arr, diff);
    return 0;
}