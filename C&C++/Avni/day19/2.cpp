#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
     ifstream fin("file4.txt");

     int count=0;
     char ch[20],c[20];

     cout<<"Enter any word which u want to count"<<endl;
     cin>>c;

     while(fin)
     {
      fin>>ch;
      if(strcmp(ch,c)==0)
       count++;
     }

     cout<<"Occurrence of word [ "<<c<<" ] = "<<count<<"\n";
     fin.close();
     return 0;
}