#include<iostream>
#include<list>
#include<algorithm>
#include<stdlib.h>
using namespace std;
class mystack
{
private:
  list<int>l;
public:
  void push(int d)
  {
    l.push_front(d);
  }
  int pop()
  { int temp;
    if(l.empty())
    {
      return 0;
    }
    else
    {
      temp=*(l.begin());
      l.pop_front();
      return(temp);
    }
  }
};
class myqueue
{
private:
  list <int> l1;
public:
  void pushBack(int d)
  {
    l1.push_back(d);
  }
  int pop()
  {
    int temp;
    if(l1.empty())
    {
      return 0;
    }
    else
    {
      temp=*(l1.begin());
      l1.pop_front();
      return(temp);
    }
  }
};
int main()
{
  int val,n1,n;
  while(1)
  {
    cout<<"\n enter \n 1. for stack \n 2. for queue \n 3. exit \n";
    cin>>n1;
    switch(n1)
    {
      case 1:
      {
          int n2;
          mystack s;
          while(1)
          {
              cout<<"\n enter\n 1. inserting the element \n 2. delete \n 3. exit\n";
	          cin>>n2;
	          switch(n2)
	          {
	              case 1:
	              {
	                  cout<<"\n enter the numbers of value \n";
	                  cin>>n;
	                  for(int i=0;i<n;i++)
	                  {
	                      cout<<"\n enter the value\n";
	                      cin>>val;
                          s.push(val);
	                  }
	                  break;
	              }
	              case 2:
	                  {
	                      int temp=s.pop();
                          cout<<"deleted number is :"<<temp<<"\n";
	                      break;;
	                  }
	              case 3:
	                  exit(0);
              }
          }
          break;
      }
      case 2:
      {
          int n2;
	      myqueue q;
	      while(1)
          {
              cout<<"\n enter\n 1. inserting the element \n 2. delete \n 3. exit\n";
	          cin>>n2;
	          switch(n2)
	          {
	              case 1:
                  {
                      cout<<"\n enter value :\n";
	                  cin>>val;
	                  q.pushBack(val);
	                  break;
	              }
	              case 2:
	              {
	                  int temp=q.pop();
                      cout<<"Deleted number is:"<<temp<<"\n";
	                  break;
	              }
	              case 3:
	                 exit(0);
	          }
          }
          break;
      }
      case 3:
          exit(0);

    }
  }
  return 0;
}

