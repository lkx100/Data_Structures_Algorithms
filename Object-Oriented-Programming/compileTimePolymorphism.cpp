#include <bits/stdc++.h>
using namespace std;

class normal{

  public:
    int x;
    int y;
    // **Function Overloading**
    // Function can exist with same name
    // Condition : Only if they have different parameters
    // Even by changing the return type won't affect them 
    void printA(){
      cout << "I am A" << endl;
    }
    void printA(int a){
      cout << "I am other A" << endl;
    }

    // **Operator Overloading**
    void operator+ (normal& obj){   // + operator
      cout << "Hello, + operator changed to print" << endl;
    }
    void operator() (){    // () operators
      cout << "I am ()" << endl;
    }
};

int main(){
  
  normal a, b;
  // based on different parameters, thier respective functions will be called
  a.printA();
  a.printA(6);

  a + b;   // + operator changed to print function

  a();

  return 0;
}