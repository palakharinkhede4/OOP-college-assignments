#include<iostream>
using namespace std;

class Calculator

{
private:
  float a,b;
  
  
public:
  
  float add(float a,float b)
  {
    
    
    return(a+b);
   
    
  }
  
 float sub(float a,float b)
  {
    
    
    return(a-b);
    
  }
  float mul(float a,float b)
  {
    
    
    return(a*b);
    
  }
    float div(float a,float b)
  {
    
    
    return(a/b);
    
  }
  
};


int main()
{
  Calculator obj;
  float x,y,c;
  char ans,op;
  
   do
  {
  
    
    
    cout<<"Enter first operand,operator and second operand   :";
    cin>>x>>op>>y;
    
    
    switch(op)
    {
      case '+':
      c=obj.add(x,y);
      cout<<"The addittion is "<<c<<endl;
	
      break;
      
      case '-':
      c=obj.sub(x,y);
      cout<<"The subtraction is :"<<c<<endl;
    break;
      case '*':
      c=obj.mul(x,y);
      cout<<"The multiplication is :"<<c<<endl;
    break; 
     case '/':
      c=obj.div(x,y);
      cout<<"The division is :"<<c<<endl;
    break;               
      
      default:
	cout<<"Enter a value either 1 or 2 ";
    }
    cout<<"Do you want perform operation again ";
    cin>>ans;
    
    
  }while(ans=='y');
  
  return 0;
}
    
  
    