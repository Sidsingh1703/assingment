/*
                       Student
                    |          |
                |                |
            |                       |
     Undergraduate_Student       Graduate_Student
         |  |    |                  |         |
       |     |    |                |           |
      |       |    |              |             |
     |         |    |            |               |
Freshman   Junior  Senior    Doctoral_Student  Masters_Student
*/

#include<iostream>
using namespace std;

class Student
{
    public:
    void print(){
      cout<<"Student is the base class"<<endl;
    }
};
class Undergraduate_Student: public Student{
    public:
    void print(){
      cout<<"Undergraduate Student is derived class of Student"<<endl;
    }
};
class Graduate_Student: public Student{
    public:
    void print(){
      cout<<" Graduate Student is derived class of Student"<<endl;
    }
};
class Freshman: public Undergraduate_Student{
     public:
    void print(){
      cout<<" Freshman is derived class of Undergraduate_Student"<<endl;
    }
};
class  Junior: public Undergraduate_Student{
     public:
    void print(){
      cout<<"  Junior is derived class of Undergraduate_Student"<<endl;
    }
};
class Senior: public Undergraduate_Student{
     public:
    void print(){
      cout<<" Senior is derived class of Undergraduate_Student"<<endl;
    }
};
class Doctoral_Student: public Graduate_Student{

     public:void print(){
      cout<<" Doctoral Student is derived class of Graduate_Student"<<endl;
    }
};
class Masters_Student: public Graduate_Student{
     public:
    void print(){
      cout<<" Masters Student is derived class of Graduate_Student"<<endl;
    }
};
int main()
{
    Student s;
    s.print();
    Undergraduate_Student u;
    u.print();
    Graduate_Student g;
    g.print();
    Freshman f;
    f.print();
    Junior j;
    j.print();
    Senior r;
    r.print();
    Doctoral_Student d;
    d.print();
    Masters_Student m;
    m.print();
}
