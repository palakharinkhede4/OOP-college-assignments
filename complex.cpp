#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex
{
 int real,imag;
public:
void get_val();

Complex()
{
  real=0;
  imag=0;
}


 Complex operator+(Complex obj);
 Complex operator*(Complex obj);
 friend istream& operator>>(istream &s,Complex &c);
 friend ostream& operator<<(ostream &s,Complex &c);
};
Complex Complex::operator+(Complex obj)
{
    Complex temp;
    temp.real = real+obj.real;
    temp.imag = imag+obj.imag;
    return(temp);
}
Complex Complex::operator*(Complex obj)
{
    Complex temp;
    temp.real=real*obj.real-imag*obj.imag;
    temp.imag=real*obj.imag+imag*obj.real;
    return(temp);
    
}
 istream& operator>>(istream &s,Complex &c)
 
{
  s>>c.real;
  s>>c.imag;
  return(s);
}
ostream& operator<<(ostream &s,Complex &c)
{
   s<<c.real;
   cout<<'+';
  s<<c.imag;
  cout<<'i';
  return(s);
}
int main()
{
  Complex c1,c2,c3,c4;
  int choice;


 

  while(1)
  {
    cout<<"\nenter1 for entering the real and imaginary part of complex-1\nenter 2 for entering the real and imaginary part of complex-2\nenter 3 for addition \nenter 4 for multiplication \nenter 5 for exit"<<endl;
  cout<<"enter your choice: "<<endl;
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"complex-1 is: "<<endl;
      cin>>c1;
    cout<<"the real and imaginary part of complex-1 is: "<<c1<<endl; 
    break;
    case 2:
       cout<<"complex-2 is: "<<endl;
       cin>>c2;
    cout<<"the real and imaginary part of complex-2 is: "<<c2<<endl;  
    break;
    case 3:
    c3=c1+c2;   
    cout<<"the addition is: "<<c3<<endl;
    break;
    case 4:
    c4=c1*c2;  
    cout<<"the multiplication is: "<<c4<<endl;
    break;
    case 5:
    exit(0);
    default:
    cout<<"invalid operation"<<endl;  
  }
 }
}
    
   
 
 