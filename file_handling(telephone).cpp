#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
//#include<cstdlib>
//#include<sstream>

using namespace std;

class person

{
  char name[50];
  int telph_no;
  
public:
  void get_data()
  {
    cin.ignore();
    cout<<"Enter the name of the person\n";
    cin.getline(name,50);
    
    cout<<"Enter the telephone number of the person\n";
    cin>>telph_no;
    
  
    
  }//get_data
  void display_data()
  {
    cout<<"\nThe name of the person is: "<<name<<"\n";
    
    cout<<"\nThe telephone number of the person is: "<<telph_no<<"\n";
    
   }//display_data
   char* get_name()
   {
     return name;
   }
  int telphn_no()
   {
     return telph_no;
   }
   
};//class person

int main()
{
  person p1;
  int choice,flag=0,tel,pos;
  char ans,sname[40];
 
  
  while(1)
  {
  cout<<"\n Menu--> \n 1. READ \n 2. WRITE\n SEARCHING--> \n 3. NAME\n 4.TELEPHONE NUMBER\ 5. UPDATED"; 
  cout<<"\n Enter Choice:";
  cin>>choice;
  
  switch(choice)
  {
    case 1: 
    {
   ofstream outfile("PERSON.DAT",ios::binary|ios::out);
  do    
  {
    p1.get_data();
    
    outfile.write((char*)(&p1),sizeof(p1));
    
    cout<<"Do you want enter the details again: \n";
    cin>>ans;
    
   
    
  }while(ans=='y' || ans=='Y');
   
  outfile.close();
	  break;
    }
    case 2:
    {    
  ifstream infile("PERSON.DAT",ios::binary|ios::in);
  while(infile.read((char*)(&p1),sizeof(p1)))
  {
    p1.display_data();
  }
    
	 break;
    }
    case 3:
    {
      cin.ignore();
           cout<<"Enter the name to be searched"<<endl;
	   cin.getline(sname,30);
	  ifstream infile("PERSON.DAT",ios::binary|ios::in);
	   while(infile.read((char*)(&p1),sizeof(p1)))
	   {
	     if(strcmp(sname,p1.get_name())==0)
	     {
	       flag=1;
	       break;
	     }
	     
	   }
	   if(flag==1)
	   {
	     cout<<"Customer name found in directory"<<endl;
	     p1.display_data();
	   }
	   else
	   {
	     cout<<"Customer name not found in directory"<<endl;
	   }
	   break;
    }
	   
    case 4:
       {
      cin.ignore();
           cout<<"Enter the telephone number to be searched"<<endl;
	   cin>>tel;
	  ifstream infile("PERSON.DAT",ios::binary|ios::in);
	   while(infile.read((char*)(&p1),sizeof(p1)))
	   {
	     if(tel==p1.telphn_no())
	     {
	       flag=1;
	       break;
	     }
	     
	   }
	   if(flag==1)
	   {
	     cout<<"Customer telephone number found in directory"<<endl;
	     p1.display_data();
	   }
	   else
	   {
	     cout<<"Customer telephone number not found in directory"<<endl;
	   }
	   break;
    }

    case 5:
    {
       char n[15];
   int post;
   fstream file("person.dat",ios::binary|ios::in|ios::out);
   cout<<"\n enter the name to be updated : ";
   cin>>n;
   while((file.read)((char*)(&p1),sizeof(p1)))
   {
     flag=0;
     if(strcmp(n,p1.get_name())==0)
     {
       post=file.tellg()-sizeof(p1);
       file.seekp(post);
        p1.get_data();
        file.write((char*) (&p1),sizeof(p1));
     }
   }

  break;
  }
      
    case 6: 
          exit (0);

  }
  }
  
  
  
  return 0;
}// main
  
  
  
  

