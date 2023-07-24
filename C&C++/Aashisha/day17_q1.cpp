// Implement a program to check if a given string is a palindrome using string functions.
#include <iostream>
#include <cstring>
using namespace std;
bool check(char sr[100])
{
    int len=strlen(sr);
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(sr[i]!=sr[len-i-1])
        {
        flag=1;
        break;
        }
    }
    if(flag)
    return false;
    else 
    return true;
}
int main()
{
    char s[100];
    cout<<"Enter a sentance: "<<endl;
    cin>>s;
    cout<<"Is a palindromic ? "<<endl;
    int res=check(s);
    if(res==0)
    cout<<"False";
    else
    cout<<"True";
    return 0;
}
