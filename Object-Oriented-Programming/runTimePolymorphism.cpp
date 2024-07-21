#include <bits/stdc++.h>
using namespace std;

class Animal{

  public:
    void speak(){
      cout << "Animals Bark" << endl;
    }
};

class Human: public Animal{

  public:
    void speak(){
      cout << "Humans Speak" << endl;
    }
};

int main(){
  
  Human Lucky;
  Lucky.speak();

  Animal dog;
  dog.speak();

  return 0;
}