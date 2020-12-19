#include<iostream>

using namespace std;

class personal
{
    
    private:
    
    char name[40];
    char gender[10];
    char dob[20];
    char address[50];
    char email[40];
    char mob_n[12];
    
    public:
        
     void get_data()
     {
         
         cout<<"\n**************************************************************\n";
         cout<<"\n\t~~~~~~~~~~~~~~~~PERSONAL DETAILS~~~~~~~~~~~~~~~~\n";
         cout<<"\n**************************************************************\n";
         
         cout<<"\nEnter Name of person\t:";
         cin.getline(name,35);
         
         cout<<"\nEnter the Gender\t:";
         cin.getline(gender,8);
         
         cout<<"\nEnter the Date Of Birth\t:";
         cin>>dob;
         
         cout<<"\nEnter address\t:";
         cin.getline(address,40);
         cin.getline(address,40);
         
         cout<<"\nEnter Mobile Number\t:";
         cin>>mob_n;
         
         cout<<"\nEnter Email Id\t:";
         cin>>email;
         cout<<"\n**************************************************************\n";
         
     }
     
     void display_data()
     {
         
         
         cout<<"\nName            : "<<name<<"\n";
         
         cout<<"\nGender          : "<<gender<<"\n";
         
         cout<<"\nDate Of Birth   : "<<dob<<"\n";
         
         cout<<"\nAddress         : "<<address<<"\n";
         
         cout<<"\nMobile Number   : "<<mob_n<<"\n";
         
         cout<<"\nEmail Id        : "<<email<<"\n";
         

     }
     
};


class academic
{
    
     private:
         
    char uni[60];
    char clg[40];
    float CGPA;
    
     public:
         
      void get_data()
      {  
         cout<<"\n\t~~~~~~~~~~~~~~~~ACADEMIC DETAILS~~~~~~~~~~~~~~~~\n";
         cout<<"\n**************************************************************\n";
         
         cout<<"\nEnter University Name\t:";
         cin.getline(uni,50);
         cin.getline(uni,50);
         
         cout<<"\nEnter College name\t:";
         cin.getline(clg,20);
         
         cout<<"\nEnter the CGPA\t:";
         cin>>CGPA;
         cout<<"\n**************************************************************\n";
      }
      
      void display_data()
      {
         
         cout<<"\nUniversity Name : "<<uni<<"\n";
         
         
         cout<<"\nCollege name    : "<<clg<<"\n";
         
         
         cout<<"\nC.G.P.A         : "<<CGPA<<"\n";
         
      }
      
};

class professional
{
    
     private:
         
    char cmp_nm[30],post[30];
    char sal[15]; 
    
    public:
     void get_data()
     {
         cout<<"\n\t~~~~~~~~~~~~~~~~PROFESSIONAL DETAILS~~~~~~~~~~~~~~~~\n";
         cout<<"\n**************************************************************\n";
         
         cout<<"\nEnter company name in which he works\t:";
         cin.getline(cmp_nm,20);
         cin.getline(cmp_nm,20);
         
         cout<<"\nEnter the Post\t:";
         cin.getline(post,30);
         
         cout<<"\nEnter the Salary Per Annum\t:";
         cin.getline(sal,15);
         cout<<"\n**************************************************************\n";
     }
     
     void display_data()
     {
         
         
         cout<<"\nCompany Name    : "<<cmp_nm<<"\n";
         
         
         cout<<"\nPost            : "<<post<<"\n";
         
         
         cout<<"\nSalary Per Annum: "<<sal<<"\n";
         
     }
};

class biodata:public personal,public academic,public professional
{
    
    public:
    
    void get_data()
    {  
        
        
        personal::get_data();
        
        academic::get_data();
        
        professional::get_data();
        
        
    }
    
    void display_data()
    {
        cout<<"\n\t~~~~~~~~~~~~~~THE BIODATA~~~~~~~~~~~~~~\n";
        
        cout<<"\n**************************************************************\n";
        cout<<"\n**************************************************************\n";
    
        personal::display_data();
        
        academic::display_data();
        
        professional::display_data();
        
        cout<<"\n**************************************************************\n";
        cout<<"\n**************************************************************\n";
    }
    
};


int main()
{
    
    biodata b;
    
    b.get_data();

     
    b.display_data();
    
    return 0;
}
    
    
    
