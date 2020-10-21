#include<iostream>
using namespace std;

class Shape
{
    private:
    int length,breadth,height,radius,side;
public:

        Shape(int l, int b, int h){
         length=l;
         breadth=b;
         height=h;
      }

       Shape(int l,int b){
        length=l;
        breadth=b;
      }
      Shape(int s){
         side=s;
      }

       int gettodscalAreaSquare(){
          return side*side;
       }
       int gettodscalAreaRect(){
          return length*breadth;
       }
       int getthdscalVolumecube(){
          return side*side*side;
       }
       int getthdscalVolumecuboid(){
          return length*breadth*height;
       }
};

class TwoDShape : public Shape
{
public:
    TwoDShape(): Shape(2){
      cout<<"TwoDShape"<<endl;
    }
};

class ThreeDShape : public Shape
{
public:
    ThreeDShape():Shape(4){
       cout<<"ThreeDShape"<<endl;
    }
};

class Square :virtual public Shape, public TwoDShape
{
    public:
    Square():TwoDShape(),Shape(2){
       cout<<"Square"<<endl;
    }
    int print(){
        Shape s(2);
      cout<<s.gettodscalAreaSquare()<<endl;
    }

};

class Rectangle : virtual public Shape,public TwoDShape
{
    public:
    Rectangle():TwoDShape(),Shape(2,4){
       cout<<"Rectangle"<<endl;
    }
    int print(){
        Shape r(2,4);
       cout<<r.gettodscalAreaRect()<<endl;
    }
};

class Cube : virtual public Shape,public ThreeDShape
{
    public:
    Cube():ThreeDShape(),Shape(4){
       cout<<"Cube"<<endl;
    }
    int print(){
        Shape c(4);
      cout<<c.getthdscalVolumecube()<<endl;
    }
};
class Cuboid :virtual public Shape, public ThreeDShape
{
    public:
    Cuboid():ThreeDShape(),Shape(2,4,2){
       cout<<"Cuboid"<<endl;
    }
    int print(){
        Shape cd(2,4,2);
      cout<<cd.getthdscalVolumecuboid()<<endl;
    }
};

int main()
{
    Square s;
    s.print();
    Rectangle r;
    r.print();
    Cube c;
    c.print();
    Cuboid cd;
    cd.print();
}
