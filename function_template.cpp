#include<iostream>
#include<stdlib.h>
using namespace std;

  template<class T>
  void selec_sort(T *a,int size)
  {
    T temp;
    int min;
    for(int i=0;i<size;i++)
    {
      min=i;
      for(int j=i+1;j<size;j++)
      {
	if(a[min]>a[j])
	{
	  min=j;
	}
      }
     temp=a[i];
     a[i]=a[min];
     a[min]=temp;
    }
  }
  
    
    int main()
    {
     
      int n,choice;
      int ib[10];
      float fb[10];
      cout<<"enter the size of an array"<<endl;
      cin>>n;
   while(1)
  {
  cout<<"\n Menu--> \n 1. integer array elements \n 2. float array elements\n 3. Exit"; 
  cout<<"\n Enter Choice:";
  cin>>choice;
  
  switch(choice)
   {
    case 1: 
          cout<<"enter the elements of an array in integer form :"<<endl;
      for(int i=0;i<n;i++)
      {
	cin>>ib[i];
      }
       selec_sort(ib,n);
       cout<<"after sorting integer array elements are display below"<<endl;
       for(int i=0;i<n;i++)
       {
	 cout<<ib[i]<<"\n";
       }
    
	  break;
    case 2: 
         cout<<"enter the elements of an array in float form :"<<endl;
       for(int i=0;i<n;i++)
      {
	cin>>fb[i];
      }
       selec_sort(fb,n);
       cout<<"after sorting float array elements are display below"<<endl;
       for(int i=0;i<n;i++)
       {
	 cout<<fb[i]<<"\n";
       } 
     
	  break;
    case 3: 
         exit (0);
	  break;
    default: 
          cout<<"please enter the value in integer or float form"<<endl;
   }
  }
	 
     return 0;
    }   
       

