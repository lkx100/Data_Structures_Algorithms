#include <bits/stdc++.h>
using namespace std;

class Hero{
  
  public:
  int health;
  int attack;

  // Parameter Constructor & give values using parameters
  Hero(int health, int attack){
    this -> health = health;
    this -> attack = attack;
  }

  // Copy Constructor
  // Using Referencing
  Hero(Hero& temp){
    this -> health = temp.health;
    this -> attack = temp.attack; 
  }

  // OR Using Poniter Method
   
  // Hero(Hero* temp){
  //   this -> health = temp -> health;
  //   this -> attack = temp -> attack; 
  // }

  void print(){
    cout << "Health is " << this->health << endl;
    cout << "Attack is " << this->attack << endl;
  }
};

int main(){
  
  Hero Lucky(100, 40);
  Lucky.print();

  Hero Sweshik(Lucky);
  // Hero Sweshik(&Lucky);
  Sweshik.print();

  return 0;
}