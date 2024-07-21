#include <bits/stdc++.h>
using namespace std;

class human{   // Super Class => All it's properties will be inherited by Sub Class 

  public:
    int height;
    int weight;
    int age;
};

class Male: public human{  // Male is a Child class which is inheriting Parent Class Properties

  public:
    int salary;
    bool isMale = true;
};

class Female: public human{

  public:
    int color;
    bool isFemale = true;
};

class Trans: public Male, public Female{  // Multiple Inheritance
  // This Child class has now access of all properties of Male & Female
};

int main(){
  
  // Lucky of Child Class now has All properties of Child Class + Parent Class
  Male Lucky;
  cout << Lucky.age << endl;
  cout << Lucky.isMale << endl;
  cout << Lucky.height << endl;

  Female bahu;
  cout << bahu.isFemale << endl;

  return 0;
}