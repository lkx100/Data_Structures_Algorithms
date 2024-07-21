// To access private members of class we can use GETTER & SETTER concept
#include <bits/stdc++.h>
using namespace std;
class hero{

  private:
  int health;
  int attack;

  public:
  int age;

  // GETTER - returns value 
  int getHealth(){
    //health = 80;
    return health;
  }
  // SETTER - initialise value
  void setHealth(int a){
    health = a;
  } 

};
int main(){
  
  hero ramesh;  // this object is created in Static Memory
  ramesh.age = 18;    // public access modifier
  
  // Dynamic Memory me How to create Object ?
  hero *Lucky = new hero;    // Lucky object created dynamically

  Lucky->setHealth(500);
  (*Lucky).setHealth(20);   // ().attribute & pointer should be inside ().
  // How to access pointer Lucky's attributes ?
  cout << "Lucky health : " << (*Lucky).getHealth() << endl;   // 1st way

  cout << "Lucky health : " << Lucky->getHealth() << endl;   // 2nd way

  cout << "Ramesh age : " << ramesh.age << endl;
  // Using getter
  cout << "Ramesh health : " << ramesh.getHealth() << endl;
  // Using setter
  ramesh.setHealth(45);
  cout << "Ramesh health : " << ramesh.getHealth() << endl;

  return 0;
}