/*
  In Inheritance OOP allows us to reuse the existing code within new class, it saves our time as we
  do not have to write a lengthy code. It leads to prevention of the duplication of code which
  reduces the chances of error.
  */
  //Example

#include<iostream>
using namespace std;

class Transpot
{
public:
    Transpot(){
     cout<<"This is Transport of base class"<<endl;
    }
    void passengers(){
      cout<<"Passengers"<<endl;
    }
    void Routes(){
      cout<<"Routes"<<endl;
    }
};

class Bus : virtual public Transpot{
 public:
     Bus(){
       cout<<"This is Bus of the Derived class"<<endl;
     }
};

class Train : virtual public Transpot{
 public:
      Train(){
       cout<<"This is Train of Transport Derived class"<<endl;
      }
};

int main()
{
    Transpot t;
    t.passengers();
    t.Routes();
    cout<<endl;

    Bus b;
    b.passengers();
    b.Routes();
    cout<<endl;

    Train tr;
    tr.passengers();
    tr.Routes();
    cout<<endl;


}


/*
   Instead of writing passenger and route function for class we just inherited it form the base
   class, this reduces the length of program and prevents the duplication of code which reduces
   the chances of error and saves time.
   */
