#include <bits/stdc++.h>
using namespace std;

class pokemon{

  private:
  int attack;
  int hp;

  public:
  int level;
  char type;

  // Default Constructor with No Return Type Nor Parameter 
  pokemon(){
    cout << "Constructor Called" << endl;
  }

  pokemon(char type, int attack){   // Constructor with Parameter

    // attack = attack;
    // Using 'this' keyword to instead of using same variable name and member name to assign value
    this -> type = type;   // this->type : pointer 'this' pointing to current object's type
    this -> attack = attack;
    // this => Pointer that stores address of the current object

    cout << "Old Constructor Deleted" << endl;
    cout << "New Parametarized Constructor is Called with type " << type << endl;
    
  }

  void printAttack(){
    cout << "Attack is : " << attack << endl;
  }

};

int main(){
  
  // Charizard Object Created Statically
  // pokemon Charizard;  // This Invokes a constructor to be called from compiler
  pokemon Charizard('A', 50);   // This invokes Constructor with Parameters
  // Hence Will delete the old constructor, that is constructor without Parameter  
  Charizard.printAttack();


  // Ojbect created Dynamically
  pokemon *pok = new pokemon('K', 100);  
  // This will invoke the Constructor once more to Initialize Object *pok
  pok->printAttack();

  return 0;
}