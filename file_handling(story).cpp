//FILE HANDLING

#include<iostream>
#include<fstream>

using namespace std;
class file
{
public:
  void write_data()
  {
    ofstream outfile("STORY.TXT");
    
    outfile<<"The roses are red.\n";
    
    outfile<<"A girl is playing there.\n";
    
    outfile<<"There is a playground.\n";
    
    outfile<<"An aeroplane is in the sky.\n";
    
    outfile<<"Numbers are not allowed in the password.";
    
  }//write_data
  
  void read_data()
  {
    int cnt=0;
    char buff[100];
    ifstream infile("STORY.TXT");
    while(!infile.eof())
    {
      infile.getline(buff,100);
      if(buff[0]!='A')
      {
	cout<<buff<<"\n";
	cnt++;
      }
    }
    cout<<"\ntotal number of lines are: "<<cnt<<"\n";
  }//read_data
  
};//class file


int main()
{
  file f1;
  f1.write_data();
  f1.read_data();
  return 0;
}//main

    

