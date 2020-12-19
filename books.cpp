#include<iostream>
#include<string.h>
using namespace std;
class books
{
 char *b_name,*b_author,*b_publisher,*title;
 int b_id,b_price,b_stock;
 
public:
  
books()
{
  b_price=0;
  b_stock=0;
  b_name=new char[20];
  b_author=new char[20];
  b_publisher=new char[20];
  title=new char[20];
  
}
void getdata()
{
  
  cout<<"enter the name of the books:";
 cin.ignore();
 cin.getline(b_name,9);
 cout<<"\nenter the name of the author:\n";
 cin.getline(b_author,9);
 cout<<"\nenter the name of the publisher:\n";
 cin.getline(b_publisher,9);
 cout<<"\nenter the unique id of the book:\n";
 cin>>b_id;
 cout<<"\nenter the price of the book:\n";
 cin>>b_price;
 cout<<"\nenter the stock position of book:\n";
 cin>>b_stock;
  
}

void display_data()
{
 cout<<"the name of the book is:"<<"\n"<<b_name<<endl;
 cout<<"the author name of the book is:"<<"\n"<<b_author<<endl;
 cout<<"the publisher name of the book is:"<<"\n"<<b_publisher<<endl;
 cout<<"the unique id of the book is:"<<"\n"<<b_id<<endl;
 cout<<"the price of the book is:"<<"\n"<<b_price<<endl;
 cout<<"the stock position of book is:"<<"\n"<<b_stock<<endl;
 
}
int search(char st[20],char sa[20])
{
  
  if(strcmp(b_name,st)==0 && strcmp(b_author,sa)==0)
  {
    return 1;
  }
  else
  { 
    return 0;
  }
}
int get_stock()
{
  return (b_stock);
}
int get_price()
{
  return (b_price);
}
};
int main()
{
  int b_number,c,i,n_cop,total_price;
  books b1[5];
  char st[20],sa[20];

  cout<<"enter the number of books:";
  cin>>b_number;
  
  for(i=0;i<b_number;i++)
  {
    cout<<"enter the details of the books:"<<endl;
    b1[i].getdata(); 
    cout<<"**********************************************************"<<endl;
  }
  for(int j=0;j<b_number;j++)
  {
     cout<<"enter the details of the books:"<<endl;
    b1[j].display_data();
     cout<<"*********************************************************"<<endl;
  }
  cout<<"_____________________________________________________________"<<endl;  
  cout<<"enter the book name which you want to search : "<<endl;
  cin>>st;
  cout<<"enter the author name which you want to search : "<<endl;
  cin>>sa;
  cout<<"_____________________________________________________________"<<endl;
  cout<<"*********************************************************"<<endl;
  for(i=0;i<b_number;i++)
  {
     c=b1[i].search(st,sa);
    if(c==1)
    {
      break;
    }
  }
  if(c==1)
  {
    cout<<"\nthe book found"<<endl;
    b1[i].display_data();
    cout<<"enter the number of copies which you want"<<endl;
  cin>>n_cop;
  if(n_cop<b1[i].get_stock())
  {
    total_price=n_cop*b1[i].get_price();
    cout<<"the total price is: "<<total_price<<endl;
    cout<<"*********************************************************"<<endl;
    
  }
  else
  {
    cout<<"not much copies are available"<<endl;
    cout<<"*********************************************************"<<endl;
  }
    
  }
  
  else
  {
    cout<<"the given book not found"<<endl;
   cout<<"*********************************************************"<<endl;
  }
  
  
   return 0;


}
