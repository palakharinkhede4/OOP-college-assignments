#include<iostream>
using namespace std;
class myexception
{
  public:
    string c;
    myexception(string s)
    {
      c=s;
    }

};
int main()
{
    int flag=0;
  int age,income;
  char a;
  string city;
  try
  {
   cout<<"\n ENTER the age\n";
   cin>>age;
   if(age<18||age>55)
   {
     throw myexception(" invalid age ");
   }
   cout<<"\n ENTER the income\n";
   cin>>income;
   if(income<50000||income>100000)
   {
     throw myexception(" invalid income ");
   }
   cout<<"\n enter y if u have four wheeler\n";
   cin>>a;
   if(a!='y')
   {
      throw myexception(" invalid vehicle ");
   }
   cout<<"\n enter your city \n";
    cin>>city;
    if(city!="pune"&&city!="mumbai"&&city!="benglaru"&&city!="chennai")
    {
        throw myexception(" invalid city ");
    }
  }
  catch(myexception e)
  {
      flag++;
    cout<<e.c;
  }
  if(flag==0)
  {
      cout<< "\n details of person is \n";
      cout<<"\nAge of the person is: "<<age<<"\n";
      cout<<"\nSalary of the person is: "<<income<<"\n";
      cout<<"\nperson has a four wheeler\n";
      cout<<"\nPerson live in the: "<<city<<"\n";
  }
  return 0;
}

