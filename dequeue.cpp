#include<iostream>
#include<stdlib.h>
#include<deque>
using namespace std;
int main()
{
  deque<int>d;
  deque<int> :: iterator it;
  int n,x;
  while(1)
  {
    cout<<"\n Enter \n 1. for pushing from back \n 2. for poping from back \n 3. for pushing from front \n 4. for poping from front \n 5. for displaying dqueue \n 6. exit \n";
    cin>>n;
    switch(n)
    {
      case 1:
          cout<<"\n enter the element\n";
	      cin>>x;
          d.push_back(x);
	      break;
      case 2:
          cout<<d.back()<<"\n";
	      d.pop_back();
	      break;
      case 3:
          cout<<"\n enter the element\n";
	      cin>>x;
	      d.push_front(x);
	      break;
      case 4:
      {
          cout<<d.front()<<"\n";
	      d.pop_front();
	      break;
      }
      case 6:
	      exit (0);
      case 5:
	      for(it=d.begin();it!=d.end();++it)
	      {
	          cout<<*it<<"\t";
	      }
	      break;
    }
  }
  return 0;
}

