#include <bits/stdc++.h>
using namespace std;
string sortSentence (string s){
    string temp;
    vector<string> ans(10);
    int count = 0, index = 0, position;

    while ( index < s.size() ){
        if ( s[index] == ' ' ){
            position = temp[temp.size()-1] - '0';  // to store the last number of that string that will become index of ans variable
            temp.pop_back();  // to remove last number in order to just print the string
            ans[position] = temp;  // store the string in index i of ans 
            temp.clear();  // after storing it, clear the temp to store next string
            count++;
        }
        else {
            temp += s[index];
        }
        index++;
    }
    position = temp[temp.size()-1] - '0'; 
    temp.pop_back(); 
    ans[position] = temp;  
    temp.clear(); 
    count++;

    for (int i = 1; i <= count; i++){
        temp += ans[i];
        temp += " ";
    }
    temp.pop_back();  // to remove last extra space from the final string 
    return temp;
}
int main(){

    string s;
    getline(cin, s);
    
    cout << sortSentence(s);
    
    return 0;
}