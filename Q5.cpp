#include<iostream>
using namespace std;

class Life
{
  private:
      int x;
 public:
     Life(){           //Default Constructor
       cout<<"Life is the Base Class"<<endl;
     }
     Life(int i){      //Parameterized Constructor
       x=i;
     }
     ~Life(){         //Destructor
       cout<<"This is Destructor"<<endl;
     }
     void print(){
      cout<<"Var in Base Class is: "<<x<<endl;
     }
     int getX(){
        return x;
     }

};

class HumanBeings : public Life
{
  public:
    HumanBeings(int j):Life(j){
      cout<<"This is Multiple Inheritance"<<endl;
    }
    void print(){
      cout<<"Human Beings is Derived Class of Life Class: "<<getX()<<endl;
    }
};

class Animals : public Life
{
  public:
    Animals(int i):Life(i){
      cout<<"This is Multiple Inheritance"<<endl;
    }
    void print(){
      cout<<"Animals is Derived Class of Life Class: "<<getX()<<endl;
    }
};

class Cat : virtual public Animals
{
  public:
    Cat(int j):Animals(j){
      cout<<"This is Multi-level Inheritance"<<endl;
    }
    void print(){
      cout<<"Cat is Derived Class of Animal Class: "<<getX()<<endl;
    }
};

int main()
{
    Life o;
    Life l(2);
    l.print();
    HumanBeings h(10);
    h.print();
    Animals a(20);
    a.print();
    Cat c(10);
    c.print();
}
