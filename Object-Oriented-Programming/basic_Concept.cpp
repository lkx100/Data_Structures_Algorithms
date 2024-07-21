/*
Access Modifiers: To determine which class members are accessible to other classes and functions, and which are not.
There are of 3 types:
1. Public --> members/attributes can be acessed by anywhere
2. Private (By Default) --> Can be acessed by only within that class
3. Protected 
*/
#include <bits/stdc++.h>
using namespace std;
class student{

  // members

  private:       // can't be acessed outside this class
  float weight;

  public:     // acessed from anywhere
  char name;
  int height;

  // ***Declare Setter & Getter under Public Access Modifiers***  
  void setWeight(int w){
    weight = w;
  }            

  float getWeight(){
    return weight;
  }             

};
int main(){

  student s1;
  //s1.weight = 49;  // ERROR, Cannot access directly private elements
  s1.name = 'A';
  s1.height = 176;
  cout << "weight of s1 is : " << s1.getWeight() << endl;
  s1.setWeight(69);
  cout << "weight of s1 is : " << s1.getWeight() << endl;

  return 0;
}