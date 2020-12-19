// VECTOR CLASS USING STANDARD TEMPLATE LIBRARIES(STL)

#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

class person
{
private:
    
    char name[40];
    int tele;
    int  age;


public:
    
    void getdata()
    {
        cout<<"\nEnter the details of the customer\n";
        
         cin.ignore();
        cout<<"\nEnter the name of the customer\n";
        cin.getline(name,30);
        
        cout<<"\nEnter the telephone number of the customer\n";
        cin>>tele;
        
        cout<<"\nEnter the Age of customer\n";
        cin>>age;
        
      cin.ignore();
        
    }
    
    void displaydata()
    {
        cout<<"\nThe details of the customer are: \n";
        
        cout<<"\nthe name of the customer :"<<name;
        
        cout<<"\nThe telephone number Of the customer :"<<tele;
        
        cout<<"\nThe Age of customer :"<<age<<"\n";
        
    }
    
    bool operator<(const person &q)const
    {
        return(age<q.age)?true:false;
    }
    
   bool operator==(const person &q)const
    {    
      return(age==q.age  && strcmp(name,q.name)==0)?true:false;
    }
    
   void search()
   {
       cout<<"\nEnter the name of the customer\n";
       cin.ignore();
       cin.getline(name,20);
       cout<<"\nEnter the age\n";
       cin>>age;
   }
     
};



int main()
{
    person p,q;
    vector<person>::iterator it;
    vector<person>v;
  
    char ans;
    int choice;
    
    
    
    while(1)
    { 
      cout<<"\nenter choice\n";
      cout<<"\n 1. For entering the details \n 2. for displaying details \n 3. For sorting by age \n 4. For searching a person \n 5. exit \n";
      cin>>choice;
      
    switch(choice)
    {
       case 1:
       {
           do
           {
                p.getdata();
                v.push_back(p);
                cout<<"\nDo you want to enter again?\n";
                cin>>ans;
           }while(ans=='y' || ans=='Y');
       }
	
	break;
	
	
       case 2:
       {
        for(it=v.begin();it!=v.end();++it)
        {
            it->displaydata();
        }
        
        break;
       }
       
       case 3:
       {
          sort(v.begin(),v.end());
          
          cout<<"\nThe list of customers In increasing ages :\n";
            for(it=v.begin();it!=v.end();++it)
            {
                it->displaydata();
            }
	
        break;
        }
        
        
       case 4:
       {
           cout<<"\nEnter the details of the person you are looking for :\n";
           
           q.search();
           
           it=find(v.begin(),v.end(),q);
           if(it==v.end())
           {
               cout<<"\nperson not found\n";
           }
           else
           {
               cout<<"\nperson  found\n";
               it->displaydata();
           }
           break;
       }
           
    
       case 5:
        exit(0);
	
    
    }
 }
}

