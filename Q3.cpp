/*
                    -------Quadrilateral--------
                    |    |          |         |
                   |      |          |         |
                  |        |          |         |
            Trapezoid  Parallelogram  Rectangle Square
*/
#include<iostream>
using namespace std;

class  Quadrilateral
{
private:
    int a,b,c,d,h,side;
public:
    Quadrilateral(int l, int m, int n, int o)
    {
        a=l;
        b=m;
        c=n;
        d=o;
    }
     Quadrilateral(int l, int m)
    {
        a=l;
        b=m;
    }
     Quadrilateral(int l)
    {
        side = l;
    }
    int getPerimeterTrapezoid(){
         return a+b+c+d;
    }
     int getAreaTrapezoid(){
         return ((a+c)/2)*h;   //a and c are length of two parallel sides
    }
     int getPerimeterParallelogram(){
         return a+b+c+d;
    }
     int getAreaParallelogram(){
         return b*h;              //b length of one base h is height
    }
    int getPerimeterRectangle(){
         return 2*(a+b);            //a is length and b is breadth
    }
    int getAreaRectangle(){
         return a*b;
    }
    int getPerimeterSquare(){
         return 4*side;
    }
    int getAreaSquare(){
         return side*side;
    }

};

class Trapezoid : public Quadrilateral{
 public:
     Trapezoid():Quadrilateral(2,4,2,4){
       cout<<"Perimeter and Area of Trapezoid: "<<endl;
     }
     int print(){
       cout<<"Perimeter of Trapezoid: "<<getPerimeterTrapezoid()<<endl;
       cout<<"Area of Trapezoid: "<<getAreaTrapezoid()<<endl;
     }
};

class Parallelogram : public Quadrilateral{
 public:
      Parallelogram():Quadrilateral(2,4,2,4){
       cout<<"Perimeter and Area of Parallelogram"<<endl;
     }
     int print(){
       cout<<"Perimeter of Parallelogram: "<<getPerimeterParallelogram()<<endl;
       cout<<"Area of Parallelogram: "<<getAreaParallelogram()<<endl;
     }
};

class Rectangle : public Quadrilateral{
 public:
      Rectangle():Quadrilateral(2,4){
       cout<<"Perimeter and Area of Rectangle: "<<endl;
     }
     int print(){
       cout<<"Perimeter of Rectangle: "<<getPerimeterRectangle()<<endl;
       cout<<"Area of Rectangle: "<<getAreaRectangle()<<endl;
     }
};

class Square : public Quadrilateral{
 public:
      Square():Quadrilateral(4){
       cout<<"Perimeter and Area of Square: "<<endl;
     }
     int print(){
       cout<<"Perimeter of Square: "<<getPerimeterSquare()<<endl;
       cout<<"Area of Square: "<<getAreaSquare()<<endl;
     }
};

int main()
{
    Trapezoid t;
    t.print();
    Parallelogram p;
    p.print();
    Rectangle r;
    r.print();
    Square s;
    s.print();
}
