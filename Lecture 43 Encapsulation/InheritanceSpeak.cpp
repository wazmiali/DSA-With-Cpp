#include<iostream>
using namespace std;

class Animal {

      public:
      int age = 20;
      int weight = 50;

      public:
      void speak(){
            cout<<"Speaking "<<endl;


      }
};

// Single Inheritance 
class Dog: public Animal {


};

int main(){

      Dog d;
      d.speak();

      cout<<"Enter a Age: ";
      cin>>d.age;

      cout<<"Enter a Weight: ";
      cin>>d.weight;
      // cout<< d.age<<endl;
      // cout<< d.weight<<endl;

      return 0;
}