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
    
    
};
int main()
{
    Triangle t(2,3, 5,4, 3, 7);
    cout<<"Triangle perimetr "<<t.perimetr();
    cout<<"triangle area "<<t.area();

    return 0;
}
