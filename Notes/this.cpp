//NOTE: this keyword can only be used inside a non-static member function
#include<iostream>
using namespace std;
  class A{
    int x,y;
    public:
    A(int x){
      this->x = x; //this keyword used since local var's name = memeber's name
    }
  };
  class Test{
    int x,y;
    public:
    Test(int x=0, int y=0){    /*The parameter int x = 0 in the constructor of the Test class is an example of a default argument in C++. 
                                When you define a function or a constructor with a default argument, you are specifying a default value for that parameter. 
                                This means that if the function or constructor is called without providing a value for that parameter, the default value is used. 
                                However, if a value is provided for that parameter when calling the function or constructor, 
                                the provided value is used instead of the default.*/
      this->x=x;
      this->y=y;
    }
    Test& setX(int a){  //return the address of the object that calls this function. Syntax: class_name& 
      x=a;
      return *this; 
    }
    Test& setY(int b){ 
      y=b;
      return *this;
    }
  };
  int main(){
    Test obj1;
    obj1.setX(10).setY(20); //setX return address of obj1, which is why setX.(setY) is possible
    /*In C++, the this pointer is a constant pointer that holds the address of the current object, and you cannot change the address it points to.
    The this pointer is meant to give you access to the members of the object on which a member function is called,
    but it itself cannot be modified to point to a different object.*/
  }
