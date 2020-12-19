#include<iostream>
using namespace std;
class convert
{
protected:
  float val1,val2;
  
public:
 /* */
 float set_value(float d)
 {
   val1=d;
 }
 float get_init()
  {
    return val1;
  }
  
  float get_convert()
  {
    return val2;
  }
  
 virtual void compute()
  {
   cout<<".............."<<endl;
  }
  
};
class KMtoM:public convert
{
public:
  void compute()
  {
    val2=val1*1000;
    cout<<"value kilometer to meter is: "<<val2<<endl;
  }
};
class MtoCM:public convert
{
public:
  void compute()
  {
    val2=val1*100;
    cout<<"value meter to centimeter is: "<<val2<<endl;
  }
};
class CMtoMM:public convert
{
public:
  void compute()
  {
    val2=val1*10;
    cout<<"value centimeter to milimeter is: "<<val2<<endl;
  }
};
class CMtoDM:public convert
{
public:
  void compute()
  {
    val2=val1*10;
    cout<<"value centimeter to decimeter is: "<<val2<<endl;
  }
};
int main()
{
  KMtoM m;
  
  float x;
  convert *ptr; 
  cout<<"enter the value you want to convert"<<endl;
  cin>>x;
  ptr=&m;
  m.set_value(x);
  ptr->compute();
  MtoCM m1;
  ptr=&m1;
  m1.set_value(x);
  ptr->compute();
  CMtoMM m2;
  ptr=&m2;
  m2.set_value(x);
  ptr->compute();
  CMtoDM m3;
  ptr=&m3;
  m3.set_value(x);
  ptr->compute();
  return 0;
}

