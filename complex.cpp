#include <iostream>
#include <math.h>
using namespace std;
class Complex 
{
   double re, im; 
 
  
public:
 
   Complex() {};
 
   Complex (double r) 
   {
      re = r; 
      im = 0;
   }
 
   Complex (double r, double i) 
   {
      re = r; 
      im = i;
   } 
 
   Complex (Complex &c) 
   {
      re = c.re; 
      im = c.im;
   }
 
   ~Complex() {}
 
  
 
   Complex & operator = (Complex &c) 
   {
      re = c.re;
      im = c.im;
 
      return (*this);
   }
 
   Complex Complex::operator + (Complex &c) 
   {
      Complex temp;
 
      temp.re = re + c.re;
      temp.im = im + c.re;
 
      return temp;
   }
 
   Complex Complex::operator - (Complex &c) 
   {
      Complex temp;
 
      temp.re = re - c.re;
      temp.im = im - c.re;
 
      return temp;
   }
 
   Complex Complex::operator * (Complex &c) 
   {
      Complex temp;
 
      temp.re = re*c.re;
      temp.im = re*c.im;
 
      return temp;
   }
 
   Complex Complex::operator / (Complex &c) 
   {
      Complex temp;
 
      double r = c.re * c.re + c.im * c.im;
      temp.re = (re * c.re + im * c.im) / r;
      temp.re = (im * c.re - re * c.im) / r;
 
      return temp;
   }   
 
int main()
{
    Complex value1(5,2);
    Complex value2(3,-3);
 
    cout << value1 << " " << value2 << endl;
 
    cout << value1 + value2 << endl;
 
    cout << value1 - value2 << endl;
 
    cout << value1 * value2 << endl;
 
    cout << value1 / value2 << endl;    
 
    value1 = value2;
 
    cout << value1 << " = " << value2 << endl;
 
    return 0;
}
