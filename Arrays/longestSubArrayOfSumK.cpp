#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> &a, int k) {

    int n = a.size(), left = 0, right = 0, maxLen = 0;
    long long sum = 0;

    while (right < n) {

        // Find Sum each time
        sum += a[right];

        if (sum < k) {
            right++;
        }

        else if (sum == k) {
            maxLen = max(maxLen, (right-left+1));
            right++;
        }

        else if (sum > k) {
            while (sum > k) {
                sum -= a[left];
                left++;
            }
            // After coming out of loop,
            // When sum <= k, check for sum == k.
            if (sum == k) {
                maxLen = max(maxLen, (right-left+1));
            }
            right++;
        }
    } 

    return maxLen;
}

int main(){

    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    int sum = 3;
    cout << longestSubArray(a, sum) << endl;
    return 0;
}