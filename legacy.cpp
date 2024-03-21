#define pi 3.14
#include <iostream>
#include <math.h>
using namespace std;

class Shape{
    public:
    double x_c, y_c;
    };
    
    
class Triangle: public Shape{
    public:
    double side1len, side2len, side3len;
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3){
        side1len = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        side2len = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
        side3len = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    };
    double area(){
        double p = perimetr()/2;
        return sqrt(p*(p-side1len)*(p-side2len)*(p-side2len));
    };
    
    double perimetr(){
        return side1len+side2len+side3len;
        
    };
    
    ~Triangle(){};
    
};

class Circle: public Shape{
  public:  
  double radius;
  
  Circle(double x_c, double y_c, double x, double y){
      radius =  sqrt((x-x_c)*(x-x_c) + (y-y_c)*(y-y_c));
  };
  
  double area(){
      return pi*radius*radius;
  };
  
  ~Circle(){};
    
};

void test_shape(){
Triangle tr(1, 3, 3, 6, 5,9);
Circle cr(2,3,6,9);

if (tr.perimetr() == 14.4222){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (tr.area() == 18.3848){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (cr.area() == 163.28){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }


}




int main()
{
    Triangle t(1,3, 3,6, 5, 9);
    cout<<"Triangle perimetr "<<t.perimetr()<<"\n";
    cout<<"triangle area "<<t.area()<<"\n";
    Circle c(2,3,6,9);
    cout<<"circle area "<<c.area()<<"\n";
    test_shape();
    return 0;
}
