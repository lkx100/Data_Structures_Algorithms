#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num = {-1,0,1,2,-1,-4};
    vector<int> p;
    for (int i = 0; i < num.size()-2; i++)
    {
        for (int j = i+1; j < num.size()-1; j++)
        {
            for (int k = j+1; k < num.size(); k++)
            {
                if ( num[i]+num[j]+num[k] == 0 )
                {
                    p.push_back(num[i]);
                    p.push_back(num[j]);
                    p.push_back(num[k]);
                }
            }
        }
    }
    for ( int i = 0; i < p.size(); i++ ){
        cout << p[i] << " ";
    }
    return 0;
}